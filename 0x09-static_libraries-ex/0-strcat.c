#include "main.h"

/**
 * _strcat - function that concatenates two strings.
 * @dest: pointer for the first string.
 * @src: pointer for the second string.
 *
 * Return: concatenated string.
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
