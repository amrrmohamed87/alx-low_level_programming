#include <unistd.h>
#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - Entry point
 * Return:0
 */


void print_alphabet(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}

	_putchar('\n');
}

