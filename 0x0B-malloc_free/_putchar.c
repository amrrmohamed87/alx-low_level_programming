#include "main.h"

/**
 * _putchar - function that writes the character c to stdout
 * @c: the character to print
 *
 * Return: On success 1, on failure 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
