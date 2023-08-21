#include "main.h"

/**
 * puts2 - function that prints every other character of a string
 * starting with the first character, followed by a new line.
 * @str: string to evaluate
 *
 */

void puts2(char *str)
{
	int len, i;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
