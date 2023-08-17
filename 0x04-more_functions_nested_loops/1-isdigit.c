#include "main.h"
/**
 * main - Write a function that checks for a digit (0 through 9).
 *
 * _isdigit - checks for digit
 * @c integer
 *
 * Return 1 or 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
