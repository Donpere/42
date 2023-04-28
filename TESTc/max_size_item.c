#include <stdio.h>
#include <stdalign.h>

// la structure de libft optimisee pour une architecture 64 bits :

// utiliser l'attribut __attribute__((aligned(8))) necessite la bib <stdalign.h>
// pour aligner le membre content sur une limite de 8 octets, qui est la taille de l'objet le plus grand dans la structure

// Dans cette version optimisée de la structure t_list, le membre next est placé en premier et 
// le membre content est aligné sur une limite de 8 octets pour améliorer les performances lors de l'accès à la structure.



// typedef struct s_list
// {
// 	struct s_list	*next;
// 	void			*content __attribute__((aligned(8)));
// }	t_list;


typedef struct s_list
{
	char c;
	char *str;
	char b;
	int nb;
	char d;
	void *content;
	struct s_list *next;
	// ici on va aligner par choix le dernier char sur 64
	alignas(64) char alignedMemory[64];
} t_list;

int main() 
{
	printf("La taille de size_t est				: %zu octets\n", sizeof(size_t));

	printf("La taille de int est				: %zu octets\n", sizeof(int));

	printf("La taille de long est				: %zu octets\n\n", sizeof(long));

	printf("La taille de charS est				: %zu octets\n\n", sizeof(char));

	printf("La taille d'un pointeur void* est		: %zu octets\n\n", sizeof(void*));

	printf("La taille d'un structure t_list est		: %zu octets\n\n", sizeof(t_list));

	printf("La taille d'alignement de t_list est		: %zu octets\n\n", alignof(t_list));


   return 0;
}
