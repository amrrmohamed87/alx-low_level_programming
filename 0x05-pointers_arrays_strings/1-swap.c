#include "main.h"

/**
 * swap_int - function that swaps the values of two integers
 * @a : first pointer for swap_int
 * @b : second pointer for swap_int
 *
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
