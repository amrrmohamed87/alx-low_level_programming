#include "lists.h"
#include <stdio.h>

/**
 * print_listint - function that prints all the elements of a list.
 * @h: list to print
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t numberOfNodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		numberOfNodes++;
		h = h->next;
	}
	return (numberOfNodes);
}
