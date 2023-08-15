#include "main.h"
/**
 * main - function that prints 10 times the alphabet, in lowercase
 *
 * print_alphabet_x10 - print lowercase alphabet 10 times
 *
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	char num, alphabet;

	for (num = 0; num <= 9; num++)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}
		_putchar('\n');
	}
}
