
#include <stdio.h>
typedef struct s_Personne pers;
struct s_Personne
{
    char nom[100];
    char prenom[100];
    char adresse[1000];
    
    int age;
    int etudiant; // Booléen : 1 = etudiant, 0 = non etudiant
};

int main(int argc, char *argv[])
{
    pers user1;
        pers user2;

    printf("USER 2, Quel est votre nom ? ");
    scanf("%s", user2.nom);
    printf("USER 2, Votre prenom ? ");
    scanf("%s", user2.prenom);
printf("\n");

    printf("USER 1, Quel est votre nom ? ");
    scanf("%s", user1.nom);
    printf("USER 1, Votre prenom ? ");
    scanf("%s", user1.prenom);
printf("\n");
    printf("Vous vous appelez : \n\tUSER 1 %s %s\n\tUSER 2 %s %s\n", user1.prenom, user1.nom, user2.prenom, user2.nom);

    return 0;
}