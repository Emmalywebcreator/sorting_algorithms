#include "sort.h"

/**
 * swap_nodes - Swap two nodes in a doubly linked list.
 * @list: A pointer to the head of the list.
 * @node1: The first node to swap.
 * @node2: The second node to swap.
 */
void swap_nodes(listint_t **list, listint_t **node1, listint_t *node2)
{
	(*node1)->next = node2->next;

	if (node2->next != NULL)
	{
		node2->next->prev = *node1;
	}

	node2->prev = (*node1)->prev;
	node2->next = *node1;

	if ((*node1)->prev != NULL)
	{
		(*node1)->prev->next = node2;
	}
	else
	{
		*list = node2;
	}

	(*node1)->prev = node2;
	*node1 = node2->prev;
}
