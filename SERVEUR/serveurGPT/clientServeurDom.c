#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>

#define SERVER_IP "127.0.0.1"
#define SERVER_PORT 8080
#define BUFFER_SIZE 1024

int main() {
	// Création du socket client
	int client_socket = socket(AF_INET, SOCK_STREAM, 0);
	if (client_socket < 0) {
		printf("Erreur lors de la création du socket\n");
		exit(1);
	}

	// Création de l'adresse du serveur
	struct sockaddr_in server_address;
	server_address.sin_family = AF_INET;
	server_address.sin_port = htons(SERVER_PORT);
	inet_aton(SERVER_IP, &server_address.sin_addr);

	// Connexion au serveur
	if (connect(client_socket, (struct sockaddr *)&server_address, sizeof(server_address)) < 0) {
		printf("Erreur lors de la connexion au serveur\n");
		exit(1);
	}

	// Envoi de la requête de téléchargement
	char request[100];
	sprintf(request, "GET /fichier.txt HTTP/1.1\r\nHost: %s\r\n\r\n", SERVER_IP);
	send(client_socket, request, strlen(request), 0);

	// Réception de la réponse du serveur
	char response[BUFFER_SIZE];
	int received_bytes = recv(client_socket, response, BUFFER_SIZE, 0);
	if (received_bytes < 0) {
		printf("Erreur lors de la réception de la réponse du serveur\n");
		exit(1);
	}

	// Extraction du corps de la réponse (le fichier)
	char *file_content = strstr(response, "\r\n\r\n") + 4;
	int file_size = received_bytes - (file_content - response);

	// Écriture du fichier sur le disque
	FILE *file = fopen("fichier.txt", "wb");
	fwrite(file_content, sizeof(char), file_size, file);
	fclose(file);

	// Fermeture de la connexion
	close(client_socket);

	return 0;
}
