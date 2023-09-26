#include "lists.h"

/**
 * listint_len - function that returns the number of elements in a list
 * @h: list to print
 *
 * Return: number of elements in a list
 */
size_t listint_len(const listint_t *h)
{
	size_t numberOfElements = 0;

	while (h)
	{
		numberOfElements++;
		h = h->next;
	}
	return (numberOfElements);
}
