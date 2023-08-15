#include <unistd.h>
#include <stdio.h>
#include "main.h"
/**
 * main - Write a function that prints the alphabet, in lowercase, followed by a nl
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

