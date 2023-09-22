#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - function that adds a new node at the start of list
 * @head: double pointer to the list
 * @str: new string to be added in the node
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_elem;
	unsigned int length = 0;

	while (str[length])
		length++;

	new_elem = malloc(sizeof(list_t));

	if (!new_elem)
		return (NULL);

	new_elem->str = strdup(str);
	new_elem->len = length;
	new_elem->next = (*head);
	(*head) = new_elem;

	return (*head);
}
