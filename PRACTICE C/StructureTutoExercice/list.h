#ifndef _LIST_H_
#define _LIST_H_

/* Definition du type booleen*/
typedef enum
{
    false,
    true
}Bool;

/* Definition d'une liste */
typedef struct ListeElement
{
    int value;
    struct ListElement *next;
}ListElement, *List;

/* Prototypes*/

List new_list(void);
Bool is_empty_list(List li);
int list_length(List li);
void print_list(List li);

#endif