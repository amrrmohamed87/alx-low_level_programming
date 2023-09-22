#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - function that adds new node at the end of the list
 * @head: double pointer to the list
 * @str: new string to be added to the node
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_elem;
	list_t *tmp = *head;
	unsigned int length = 0;

	while (str[length])
		length++;

	new_elem = malloc(sizeof(list_t));

	if (!new_elem)
		return (NULL);

	new_elem->str = strdup(str);
	new_elem->len = length;
	new_elem->next = NULL;

	if (*head == NULL)
	{
		*head = new_elem;
		return (new_elem);
	}

	while (tmp->next)
		tmp = tmp->next;

	tmp->next = new_elem;

	return (new_elem);
}
