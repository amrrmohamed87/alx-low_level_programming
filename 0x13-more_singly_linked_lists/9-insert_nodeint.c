#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node at
 *a given position
 * @head: pointer to the 1st node in list
 * @idx: index where node is added
 * @n: data to be inserted in the node
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *newNode;
	listint_t *tmp = *head;

	newNode = malloc(sizeof(listint_t));

	if (!newNode || head)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}

	for (i = 0; tmp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			newNode->next = tmp->next;
			tmp->next = newNode;
			return (newNode);
		}
		else
			tmp = tmp->next;
	}
	return (NULL);
}
