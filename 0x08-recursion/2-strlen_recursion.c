#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string
 * @s: string
 *
 * Return: The length of a string
 */
int _strlen_recursion(char *s)
{
	int i = 0;
	int j = 0;

	if (s[i] == '\0')
	{
		return (j);
	}
	else
	{
		j++;
		j = j + _strlen_recursion(s + 1);
	}
	return (j);
}
