#include <stdio.h>

/**
 * main - main function
 *
 * Return: always 0
 */

int main (void)
{
	char alphabet = 'z';

	while(alphabet >= 'a')
	{
		putchar(alphabet);
		alphabet--;
	}

	putchar('\n');
	return (0);
}
