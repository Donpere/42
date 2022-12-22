#include <stdio.h>

typedef struct s_Joueur s_detail;
struct s_Joueur
{
    char nom[50];
    char prenom[50];
    int age;
    int taille;
    int poids;
};

s_detail User1;

int main()
{

s_detail User1, User2, User3, User4, User5;
s_detail tab[] = {User1, User2, User3, User4, User5};

printf("nom 1 ?");
scanf("%s", User1.nom);
printf("prenom 1 ?");
scanf("%s", User1.prenom);
printf("age 1 ?");
scanf("%d", &User1.age);
printf("taille 1 ?");
scanf("%d", &User1.taille);

printf("nom 2 ?");
scanf("%s", User2.nom);
printf("prenom 2 ?");
scanf("%s", User2.prenom);
printf("age 2 ?");
scanf("%d", &User2.age);
printf("taille 2 ?");
scanf("%d", &User2.taille);

printf("nom 3 ?");
scanf("%s", User3.nom);
printf("prenom 3 ?");
scanf("%s", User3.prenom);
printf("age 3 ?");
scanf("%d", &User3.age);
printf("taille 3 ?");
scanf("%d", &User3.taille);

printf("nom 4 ?");
scanf("%s", User4.nom);
printf("prenom 4 ?");
scanf("%s", User4.prenom);
printf("age 4 ?");
scanf("%d", &User4.age);
printf("taille 4 ?");
scanf("%d", &User4.taille);

printf("nom 5 ?");
scanf("%s", User5.nom);
printf("prenom 5 ?");
scanf("%s", User5.prenom);
printf("age 5 ?");
scanf("%d", &User5.age);
printf("taille 5 ?");
scanf("%d", &User5.taille);

printf("User 1 s'appelle %s %s, a %d ans et mesure %d cm.", User1.prenom, User1.nom, User1.age, User1.taille);


return (0);
}