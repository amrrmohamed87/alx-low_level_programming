#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to output
 * @c: the character to print.
 *
 * Return: 1 on success, 0 on error.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
