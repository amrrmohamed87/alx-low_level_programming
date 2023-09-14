#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all it's param
 * @n: number of elements
 * @...: ellipsis
 *
 * Return: sum of all param on success, 0 if n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum_of_numbers = 0;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		sum_of_numbers += va_arg(ap, int);
	}
	va_end(ap);

	return (sum_of_numbers);
}
