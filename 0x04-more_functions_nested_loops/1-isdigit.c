#include "main.h"

/**
 * _isdigit - checks if parameter is a digit.
 * @c: input character.
 * Return: 1 if is a digit, otherwise 0.
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
