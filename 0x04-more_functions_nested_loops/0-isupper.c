#include "main.h"
/**
 * main - Write a function that checks for uppercase character.
 *
 * _isupper - checks for uppercasr characters.
 * @c character
 *
 * Return 1 or 0
 */

int _isupper(int c)
{
	if (c <= 'A' && c >= 'Z')
		return (1);
	else
		return (0);
}
