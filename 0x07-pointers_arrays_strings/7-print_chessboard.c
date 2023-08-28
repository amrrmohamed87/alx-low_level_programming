#include "main.h"

/**
 * print_cheesboard - function that prints a cheesboard
 * @a: array
 *
 * Return: Always 0 on success.
 */
void print_cheesboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
			_putchar(a[i][j]);
		_putchar('\n');
	}
}
