#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>

#define SERVER_PORT 8080
#define BUFFER_SIZE 1024

int main() {
	// Création du socket serveur
	int server_socket = socket(AF_INET, SOCK_STREAM, 0);
	if (server_socket < 0) {
		printf("Erreur lors de la création du socket\n");
		exit(1);
	}

	// Création de l'adresse du serveur
	struct sockaddr_in server_address;
	server_address.sin_family = AF_INET;
	server_address.sin_port = htons(SERVER_PORT);
	server_address.sin_addr.s_addr = INADDR_ANY;

	// Attribution de l'adresse et du port au socket
	if (bind(server_socket, (struct sockaddr *)&server_address, sizeof(server_address)) < 0) {
		printf("Erreur lors de l'attribution de l'adresse et du port\n");
		exit(1);
	}

	// Mise en écoute du socket
	if (listen(server_socket, 5) < 0) {
		printf("Erreur lors de la mise en écoute du socket\n");
		exit(1);
	}

	while (1) {
		// Acceptation d'une nouvelle connexion
		struct sockaddr_in client_address;
		int client_socket = accept(server_socket, (struct sockaddr *)&client_address, (socklen_t *)&client_address);
		if (client_socket < 0) {
			printf("Erreur lors de l'acceptation de la connexion\n");
			continue;
		}

		// Réception de la requête du client
		char request[BUFFER_SIZE];
		int received_bytes = recv(client_socket, request, BUFFER_SIZE, 0);
		if (received_bytes < 0) {
			printf("Erreur lors de la réception de la requête du client\n");
			close(client_socket);
			continue;
		}

		// Extraction de l'URI demandé dans la requête
		char uri[100];
		sscanf(request, "GET %s HTTP/1.1", uri);

		// Vérification de l'URI demandé et envoi de la réponse
		if (strcmp(uri, "/fichier.txt") == 0) {
			FILE *file = fopen("fichier.txt", "rb");
			if (file == NULL) {
				printf("Erreur lors de l'ouverture du fichier\n");
				char response[] = "HTTP/1.1 404 Not Found\r\nContent-Length: 9\r\n\r\nNot Found";
				send(client_socket, response, strlen(response), 0);
			} else {
				fseek(file, 0, SEEK_END);
				int file_size = ftell(file);
				fseek(file, 0, SEEK_SET);

				char response[100];
				sprintf(response, "HTTP/1.1 200 OK\r\nContent-Length: %d\r\n\r\n", file_size);
				send(client_socket, response, strlen(response), 0);

				char buffer[BUFFER_SIZE];
				int read_bytes = 0;
				while ((read_bytes = fread(buffer, sizeof(char), BUFFER_SIZE, file)) > 0) {
					send(client_socket, buffer, read_bytes, 0);
				}

				fclose(file);
			}
		} else {
			char response[] = "HTTP/1.1 404 Not Found\r\nContent-Length: 9\r\n\r\nNotFound";
send(client_socket, response, strlen(response), 0);
}
// Fermeture de la connexion avec le client
	close(client_socket);
}

// Fermeture du socket serveur
close(server_socket);

return 0;