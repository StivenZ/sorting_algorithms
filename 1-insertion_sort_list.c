#include "sort.h"
/**
 * insertion_sort_list - implements insertion algorithm
 * @list: pointer to header of the linked list
*/
void insertion_sort_list(listint_t **list)
{
    listint_t *tmp1, *tmp2, *c_element;
    tmp1 = tmp2 = *list;

    while ((tmp1 != NULL) && (tmp1->next != NULL))
    {
        tmp2 = tmp1->next;
        c_element = tmp2;
        while (tmp1->prev != NULL && tmp2->n < tmp2->prev->n)
        {
            tmp2->next->prev = tmp1;
            tmp1->next = tmp2->next;
            tmp2->prev = tmp1->prev;
            tmp2->next = tmp1;
            tmp2 = tmp1;
            tmp1 = tmp1->prev;
            print_list(*list);
        }
        tmp1 = c_element;
    }
}
