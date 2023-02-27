#include "main.h"

/**
 * _puts - a function that prints a string
 *@str: the string
 *Return: Void
 */

void _puts(char *str)
{
	while (*str != '\0')

		_puts(*str++);

	_putchar('\n');
}
