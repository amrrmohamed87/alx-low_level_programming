#include "main.h"

/**
 * _strncat - function that concatenates two strings and it will
 * use at most n bytes from src
 * @dest: pointer to the first string
 * @src: pointer to the second string
 * @n: number of bytes
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;

	while (j < n && src[i] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
