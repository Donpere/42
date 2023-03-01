#include <stdlib.h>
#include "libft.h"


// La déclaration d'un pointeur de fonction se fait en utilisant la syntaxe suivante :
// type_de_retour (*nom_du_pointeur_de_fonction)(liste_des_paramètres);

// Cela définit une variable qui peut contenir l'adresse d'une fonction qui retourne type_de_retour 
// et prend les arguments spécifiés dans liste_des_paramètres.

//Par exemple, pour définir un pointeur vers une fonction qui prend un pointeur vers void 
// et ne retourne rien, on peut utiliser :
//void (*ptr_func)(void *);

// Pour assigner une fonction à un pointeur de fonction, on peut simplement utiliser le nom de la fonction. 
// Par exemple, si nous avons une fonction appelée ma_fonction qui prend un pointeur vers void et ne retourne rien, 
// on peut lui assigner un pointeur de fonction avec la déclaration suivante :
//void (*ptr_func)(void *);
// ptr_func = &ma_fonction;

// Lorsqu'on appelle une fonction via un pointeur de fonction, on utilise également la syntaxe suivante :
// (*ptr_func)(liste_des_arguments);

// Par exemple, si nous avons un pointeur de fonction appelé ptr_func qui pointe vers une fonction qui prend un entier et retourne un entier, 
// on peut l'appeler en utilisant :
// int result = (*ptr_func)(42);

// Cela appelle la fonction pointée par ptr_func en lui passant l'entier 42 comme argument, 
// et stocke la valeur de retour dans la variable result.

///////////////////////////////////////////////


// Si vous avez plusieurs fonctions qui prennent un int en argument et retournent un int, 
// vous pouvez les faire pointer toutes sur la même adresse mémoire d'un pointeur de fonction, 
// et les appeler successivement en utilisant ce pointeur.

// Par exemple, si vous avez les fonctions addInt, subInt et mulInt qui prennent toutes un int en argument 
// et retournent un int, vous pouvez faire pointer chacune de ces fonctions sur un pointeur de fonction comme suit :

// int addInt(int a)
// {
//     return a + 1;
// }

// int subInt(int a)
// {
//     return a - 1;
// }

// int mulInt(int a)
// {
//     return a * 2;
// }

// int (*ptr_func)(int) = NULL;

// ptr_func = &addInt;
// int result1 = (*ptr_func)(10); // result1 = 11

// ptr_func = &subInt;
// int result2 = (*ptr_func)(10); // result2 = 9

// ptr_func = &mulInt;
// int result3 = (*ptr_func)(10); // result3 = 20

//Dans cet exemple, nous avons défini trois fonctions différentes addInt, subInt et mulInt, 
// chacune prenant un int en argument et retournant un int. 
// Nous avons ensuite initialisé un pointeur de fonction ptr_func à NULL, 
// puis nous avons assigné l'adresse de chaque fonction à ptr_func successivement à l'aide de l'opérateur &. 
// Ensuite, nous avons appelé la fonction pointée par ptr_func en passant l'entier 10 comme argument 
// et stocké la valeur de retour dans des variables result1, result2 et result3.

// Notez que nous avons d'abord assigné l'adresse de addInt à ptr_func, 
// puis nous avons appelé la fonction pointée par ptr_func pour calculer result1, 
// puis nous avons assigné l'adresse de subInt à ptr_func et avons appelé la fonction pointée par ptr_func pour calculer result2,
//  et ainsi de suite. De cette manière, nous pouvons passer une série de fonctions à notre pointeur ptr_func 
// pour les appeler successivement.

/////////////////////////////////////////////////////////

// exemple de programme qui stocke une liste de fonctions dans un tableau de pointeurs de fonction, 
// puis utilise ce tableau pour appeler ces fonctions successivement :

// #include <stdio.h>

// // Définition des fonctions
// int addInt(int a)
// {
//     return a + 1;
// }

// int subInt(int a)
// {
//     return a - 1;
// }

// int mulInt(int a)
// {
//     return a * 2;
// }

// int main()
// {
//     // Initialisation du tableau de pointeurs de fonctions
//     int (*funcList[3])(int) = {&addInt, &subInt, &mulInt};
//     int i, result;

//     // Appel des fonctions successivement en utilisant le tableau de pointeurs
//     for (i = 0; i < 3; i++)
//     {
//         result = (*funcList[i])(10);
//         printf("Resultat de la fonction %d : %d\n", i, result);
//     }

//     return 0;
// }

// Dans ce programme, nous avons d'abord défini trois fonctions différentes addInt, subInt et mulInt, 
// chacune prenant un int en argument et retournant un int. 
// Ensuite, nous avons initialisé un tableau de pointeurs de fonctions funcList avec les adresses de ces fonctions. 
// Nous avons ensuite utilisé une boucle for pour parcourir le tableau funcList et appeler chaque fonction successivement 
// en utilisant l'opérateur * pour déréférencer le pointeur et appeler la fonction pointée, comme suit :

// result = (*funcList[i])(10);

// Ici, funcList[i] est le pointeur de fonction pointant vers la i-ème fonction dans le tableau funcList. 
// Nous avons ensuite déréférencé ce pointeur en utilisant * et appelé la fonction pointée en passant l'entier 10 comme argument.
// La valeur de retour de la fonction est stockée dans la variable result, 
// que nous avons ensuite affichée à l'aide de la fonction printf.

// Ce programme affichera le résultat de chaque fonction dans le tableau funcList appelée avec l'entier 10.

////////////////////////////////////////////////////////////////////////////////

// La structure t_list pour représenter les éléments de la liste chaînée
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

// Fonction pour créer un nouvel élément de la liste chaînée
t_list	*ft_lstnew(void *content)
{
	t_list	*new_elem;

	new_elem = (t_list *)malloc(sizeof(t_list));
	if (!new_elem)
		return (NULL);
	new_elem->content = content;
	new_elem->next = NULL;
	return (new_elem);
}

// Fonction pour ajouter un nouvel élément au début de la liste chaînée
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

// Fonction qui affiche une chaîne de caractères à l'écran
void	print_string(void *content)
{
	ft_putstr((char *)content);
	ft_putchar('\n');
}

// Fonction qui applique une fonction donnée à chaque élément de la liste chaînée
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}	
}

int	main(void)
{
	t_list	*list;

	// Création d'une liste contenant trois chaînes de caractères
	list = ft_lstnew("Bonjour");
	ft_lstadd_front(&list, ft_lstnew("mon"));
	ft_lstadd_front(&list, ft_lstnew("ami"));

	// Application de la fonction print_string à chaque élément de la liste
	ft_lstiter(list, print_string);

	// Libération de la mémoire allouée pour la liste et son contenu
	ft_lstclear(&list, free);

	return (0);
}
