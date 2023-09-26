#include "lists.h"

/**
 * add_nodeint_end -  function that adds a new node at the end of a list
 * @head: pointer to the 1st elem in the list
 * @n: data to be inserted in the new elem
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *tmp = *head;

	newNode = malloc(sizeof(listint_t));
	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	while (tmp->next)
		tmp = tmp->next;

	tmp->next = newNode;

	return (newNode);
}
