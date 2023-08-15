#include <unistd.h>
#include <stdio.h>
#include "main.h"
/**
 * main - print the alphabet, in lowercase, followed by a nl
 *
 * Return: Always 0
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

