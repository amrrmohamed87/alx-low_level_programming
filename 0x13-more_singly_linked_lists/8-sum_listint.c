#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the data (n) of a list
 * @head: 1st node in the list
 *
 * Return: sum, 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tmp = head;

	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
