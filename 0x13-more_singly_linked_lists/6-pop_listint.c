#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a list and
 * returns the head node’s data (n).
 * @head: pointer to the 1st elem in the list
 *
 * Return: the head node’s data (n), 0 if empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int number;

	if (!head || !*head)
		return (0);

	number = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (number);
}
