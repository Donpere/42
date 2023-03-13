#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/socket.h>
#include <arpa/inet.h>

// gcc serveur.c -o serveur
// ./serveur




int main(int argc, char *argv[]) {
	int server_socket, client_socket, addr_size;
	struct sockaddr_in server_addr, client_addr;
	char buffer[1024];
	int bytes_received;

	// Créer une socket
	server_socket = socket(AF_INET, SOCK_STREAM, 0);
	if (server_socket < 0) {
		perror("Erreur lors de la création de la socket");
		exit(EXIT_FAILURE);
	}

	// Préparer l'adresse du serveur
	memset(&server_addr, 0, sizeof(server_addr));
	server_addr.sin_family = AF_INET;
	server_addr.sin_port = htons(8080); // Port du serveur
	server_addr.sin_addr.s_addr = INADDR_ANY;

	// Lier la socket à l'adresse du serveur
	if (bind(server_socket, (struct sockaddr *)&server_addr, sizeof(server_addr)) < 0) {
		perror("Erreur lors du bind");
		exit(EXIT_FAILURE);
	}

	// Mettre le serveur en écoute
	if (listen(server_socket, 5) < 0) {
		perror("Erreur lors de la mise en écoute");
		exit(EXIT_FAILURE);
	}

	printf("Le serveur est en écoute sur le port 8080...\n");

	// Accepter les connexions entrantes
	addr_size = sizeof(client_addr);
	client_socket = accept(server_socket, (struct sockaddr *)&client_addr, (socklen_t *)&addr_size);
	if (client_socket < 0) {
		perror("Erreur lors de l'acceptation de la connexion");
		exit(EXIT_FAILURE);
	}

	printf("Connexion acceptée depuis %s:%d\n", inet_ntoa(client_addr.sin_addr), ntohs(client_addr.sin_port));

	// Recevoir des données depuis le client
	while ((bytes_received = recv(client_socket, buffer, sizeof(buffer), 0)) > 0) {
		printf("Message reçu depuis le client : %s\n", buffer);

		// Envoyer une réponse au client
		if (send(client_socket, "Message reçu", strlen("Message reçu"), 0) < 0) {
			perror("Erreur lors de l'envoi de la réponse au client");
			exit(EXIT_FAILURE);
		}
	}

	if (bytes_received < 0) {
		perror("Erreur lors de la réception des données");
		exit(EXIT_FAILURE);
	}

	// Fermer la socket du client et du serveur
	close(client_socket);
	close(server_socket);

	return 0;
}
