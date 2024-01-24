#ifndef SORT_H
#define SORT_H

/* Comparison direction macros for bitonic sort */
#define UP 0
#define DOWN 1

/**
 * struct bool - Enumeration of Boolean values.
 * @false: Equals 0.
 * @true: Equals 1.
 */
typedef struct bool
{
        false = 0,
        true
} bool;

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void swap_nodes(listint_t **list, listint_t **node1, listint_t *node2);
void swap_val(int *a, int *b);
void print_list(const listint_t *list);
void print_array(const int *array, size_t size);

void insertion_sort_list(listint_t **list);
void bubble_sort(int *array, size_t size);
#endif
