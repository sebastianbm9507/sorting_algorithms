#include "sort.h"
/**
* insertion_sort_list - Sorts list according to insertion sort algorithm
* @list: list to be sorted
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *current_node = NULL;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;
	/* list exist */
	current_node = (*list)->next;

	while (current_node != NULL)
	{
		while (current_node->prev != NULL && current_node->n < current_node->prev->n)
		{
			/* Chain nodes */
			current_node->prev->next = current_node->next;
			if (current_node->next != NULL)
			{
				current_node->next->prev = current_node->prev;
			}
			current_node->next = current_node->prev;
			current_node->prev = current_node->prev->prev;
			current_node->next->prev = current_node;

			/* Case it's head */
			if (current_node->prev == NULL)
				*list = current_node;
			else
				current_node->prev->next = current_node;
			print_list(*list);
		}
		current_node = current_node->next;
	}
}
