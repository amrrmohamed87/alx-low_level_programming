#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the node at a specific
 * index of a list
 * @head: 1st node in the list
 * @index: index of the node
 *
 * Return: pointer to the node we're looking for, or
 * NULL if node doesn't exists
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tmp = head;

	while (tmp && i < index)
	{
		tmp = tmp->next;
		i++;
	}

	return (tmp ? tmp : NULL);
}
