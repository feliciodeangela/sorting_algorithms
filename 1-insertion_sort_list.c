#include "sort.h"
/**
 * insertion_sort_list - Entry point.
 * Desription: Sort a linked list based on insertion sort algorythm.
 * @list: Node that represents the begininng of the list.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *aux = list, *tmp = list->next, *current;

	current = malloc(sizeof(listint_t));
	if (current == NULL)
		return (NULL);
	//
	while (aux != NULL && tmp != NULL)
	{
		aux = aux->next;
		tmp = tmp->next;
	}
}
