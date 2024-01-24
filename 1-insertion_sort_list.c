#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list in ascending order using
 *                       the Insertion sort algorithm.
 * @list: A pointer to a pointer to the head of the list.
 * Description: This function swaps the node of a doubly linked list.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *iter, *insert, *tmp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	for (iter = (*list)->next; iter != NULL; iter = tmp)
	{
		tmp = iter->next;
		insert = iter->prev;
		while (insert != NULL && iter->n < insert->n)
		{
			swap_nodes(list, &insert, iter);
			print_list((const listint_t *)*list);
		}
	}
}
