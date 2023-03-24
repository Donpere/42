#include <stdio.h>
#include <stdlib.h>

typedef struct s_list
{
  void *content;
  struct s_list *next;
} t_list;
  
int main ()
{
    char a = 'z';
	int b = 12;
    
    t_list *lst = NULL;
    t_list **lstDoub = &lst;
    
  printf("%p\n", lst);
  printf("%p\n", lstDoub);
  
    lst = malloc(sizeof(t_list));
    
  //lstDoub = &lst;

        
    printf("%p\n", lst);
    printf("%p\n", lstDoub);
    
    t_list *lst2 = malloc(sizeof(t_list));
     t_list *lst3 = malloc(sizeof(t_list));
      t_list *lst4 = malloc(sizeof(t_list));
    
    lst->next = lst2;
        lst2->next = lst3;
            lst3->next = lst4;

    lst3->content = &a;
	lst2->content = &b;


       free(lst);
        
    return 0;
}
