#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly
 * allocated space in memory, which contains a copy of the
 * string given as a parameter.
 * @str: input value
 *
 * Return: the duplicated string on success, 0 if str is equal NULL
 */
char *_strdup(char *str)
{
	unsigned int i, j;
	char *newstr;

	if (str == NULL)
		return (NULL);

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	newstr = malloc(sizeof(char) * (i + 1));

	if (newstr == NULL)
		return (NULL);

	for (j = 0; str[j]; j++)
	{
		newstr[j] = str[j];
	}
	return (newstr);
}
