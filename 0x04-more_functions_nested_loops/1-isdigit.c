#include "main.h"
/**
 * _isdigit - checks for digit
 * @c: function parameter
 * Return: 1 on success 0 on failuer
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
