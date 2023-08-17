#include "main.h"
/**
 * main - Write a function that checks for uppercase character.
 *
 * _isupper - checks for uppercase character
 * @c : function paratmeter
 * Return: 1 on success 0 on failuer
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return(1);
	else
		return (0);
	
}
