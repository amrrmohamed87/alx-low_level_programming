#include "lists.h"

/**
 * list_len - function thar returns the number of elements
 * in a linked list
 * @h: pointer to the list
 *
 * Return: the number of elements in list
 */
size_t list_len(const list_t *h)
{
	unsigned int num_elements = 0;

	while (h)
	{
		num_elements++;
		h = h->next;
	}
	return (num_elements);
}
