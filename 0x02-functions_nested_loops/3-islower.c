#include "main.h"

/**
 * _islower - Function checking for lowercase character
 * Return: 1 If the character is lower(s)
 * @c: A character to be evaluated
 */

int _islower(int c)
{
	if (c >= 'a' || c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
