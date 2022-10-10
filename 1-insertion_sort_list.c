#include "sort.h"
void swap_nodes(listint_t *node_1, listint_t *node_2, listint_t **head)
{
    if (node_1->prev == NULL)
    {
        node_1->next = node_2->next;
        node_2->next->prev = node_1;
        node_2->prev = node_1->prev;
        node_2->next = node_1;
        node_1->prev = node_2; 
        *head = node_2;
    }
    else
    {
        node_1->next = node_2->next;
        if (node_2->next != NULL)
           node_2->next->prev = node_1;
        node_1->prev->next = node_2;
        node_2->prev = node_1->prev;
        node_2->next = node_1;
        node_1->prev = node_2;
    }
    
}
void insertion_sort_list(listint_t **list)
{
    listint_t *node = malloc(sizeof(listint_t *));
    listint_t *runner = malloc(sizeof(listint_t *));
    node = *list;
    while (node->next != NULL)
    {
        if(node->n > node->next->n)
        {
            swap_nodes(node,node->next, list);
            print_list(*list);
            runner = node->prev;
            node = node->prev;
            while (runner->prev != NULL)
            {
                if(runner->n < runner->prev->n)
                {
                    swap_nodes(runner->prev, runner, list);
                    print_list(*list);
                    runner = runner->next;
                }
                runner = runner->prev;
            }
        }
        node = node->next;
    }
}