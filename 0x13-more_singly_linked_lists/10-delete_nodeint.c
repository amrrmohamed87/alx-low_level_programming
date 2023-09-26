#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node at
 * index of a list
 * @head: pointer to 1st elem in list
 * @index: index of node to delete
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = *head;
	listint_t *currentNode = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	while (i < index - 1)
	{
		if (!tmp || !(tmp->next))
			return (-1);
		tmp = tmp->next;
		i++;
	}


	currentNode = tmp->next;
	tmp->next = currentNode->next;
	free(currentNode);

	return (1);
}

