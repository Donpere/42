#include <stdio.h>
#include <string.h>
#include <sys/socket.h>
#include <arpa/inet.h>

int main(int argc , char *argv[])
{
// 	"socket_desc" est une variable déclarée dans le code que j'ai précédemment fourni, c'est un descripteur de socket. 
//Un descripteur de socket est un identificateur unique qui est attribué par le système d'exploitation pour chaque socket 
//créé. Il sert à identifier un socket spécifique lorsque vous voulez effectuer des opérations sur ce socket, 
//comme lier, écouter ou accepter des connexions.

// Dans notre exemple, socket_desc est initialisé avec le résultat de la fonction socket() qui est utilisée pour créer 
//un nouveau socket. C'est un entier qui est utilisé pour identifier le socket créé. Il est utilisé dans les fonctions 
//ultérieures telles que bind(), listen() et accept() pour indiquer au système d'exploitation sur quel socket 
//ces opérations doivent être effectuées.
    int socket_desc , new_socket , c;

//   La ligne "struct sockaddr_in server, client;" 
//   déclare deux variables de type "struct sockaddr_in". 

// 	 Ces structures sont utilisées pour stocker les informations d'adresse d'un socket. 
// 	 Elles contiennent les champs suivants :

// sin_family : indique le type de socket (AF_INET pour les sockets IPV4)
// sin_addr : contient l'adresse IP du socket
// sin_port : contient le numéro de port du socket

//   La variable "server" contiendra les informations d'adresse de notre serveur (IP et port sur lesquels il écoute), 
//   tandis que "client" contiendra les informations d'adresse du client qui se connecte au serveur.
    struct sockaddr_in server , client;
    char *message;

    //Création de socket - AF_INET pour ipv4 - AF_INET6 pour ipv6

// 	SOCK_STREAM est un type de socket qui utilise le protocole TCP (Transmission Control Protocol) 
//pour gérer les communications réseau. Il offre une communication fiable et en flux continu, 
//ce qui signifie que les données sont envoyées et reçues en séquences d'octets, 
//et que tous les octets sont garantis d'arriver à destination dans l'ordre où ils ont été envoyés. 
//Il gère également les erreurs de transmission et les retransmissions automatiques en cas de besoin.

// Les sockets de type SOCK_STREAM sont généralement utilisés pour les applications qui nécessitent une transmission 
//de données fiable, comme les connexions de terminal distant, les transferts de fichiers, 
//les connexions de bases de données, etc. Il garantit que les données sont bien transmises et reçues, 
//et il offre un mécanisme de contrôle de flux pour éviter les débordements de tampon en cas de saturation de la bande passante.

// Il est à noter qu'il existe un autre type de socket qui est SOCK_DGRAM qui utilise 
//le protocole UDP (User Datagram Protocol) qui est un protocole non connecté, 
//peu fiable et qui ne garantit pas l'ordre dans lequel les paquets arrivent. 
//Il est utilisé pour les applications qui nécessitent une communication rapide et peu coûteuse, 
//comme les jeux en ligne, les applications de streaming audio et vidéo, etc.
    socket_desc = socket(AF_INET , SOCK_STREAM , 0);
    if (socket_desc == -1)
    {
        printf("Impossible de créer le socket");
    }

    //Préparation de l'adresse struct
    server.sin_family = AF_INET;
    server.sin_addr.s_addr = INADDR_ANY;
 	 
//"server.sin_port = htons( 8888 );" indique que le serveur écoute sur le port 8888, mais pour garantir que le numéro 
//de port soit transmis correctement au système d'exploitation en utilisant l'ordre de bits de réseau (big-endian), 
//la fonction htons est utilisée pour convertir le numéro de port en ordre de bits de réseau.

// Il existe également une fonction similaire htonl pour convertir les nombres entiers de longueur sur l'ordre de bit 
//de l'hôte vers l'ordre de bit de réseau, et ntohs et ntohl pour convertir les nombres entiers de l'ordre de bits 
//de réseau vers l'ordre de bits de l'hôte.
    server.sin_port = htons( 8888 );

    //Liaison
    if( bind(socket_desc,(struct sockaddr *)&server , sizeof(server)) < 0)
    {
        puts("Liaison impossible");
        return 1;
    }
    puts("Liaison OK");

    //Listen - 3 connexions entrantes autorisees max
	// En résumé, la ligne "listen(socket_desc , 3);" indique au système d'écouter les connexions entrantes 
	// sur le socket "socket_desc" 
	// et de mettre en file d'attente jusqu'à 3 connexions entrantes.
    listen(socket_desc , 3);

    //Accept et conversation avec le client
    puts("Attente de connexions entrantes...");
    c = sizeof(struct sockaddr_in);
    while( (new_socket = accept(socket_desc, (struct sockaddr *)&client, (socklen_t*)&c)) )
    {
        puts("Connexion acceptée");

        //Réponse
        message = "Bonjour client, bienvenue sur mon serveur.\n";
        write(new_socket , message , strlen(message));
    }

    if (new_socket<0)
    {
        perror("Acceptation a échoué");
        return 1;
    }

    return 0;
}
