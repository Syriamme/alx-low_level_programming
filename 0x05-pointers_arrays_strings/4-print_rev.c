#include "main.h"

/**
 *print_rev - a function that prints a string in reverse
 *@s: The string
 *Return: Void
 *
 */

void print_rev(char *s)
{
	int len = 0;
	int i;

	while (*s != '\0')
	{
		s++
		len++;
	}
	for (i = len; i > 0; i--)
	{
		_putchar(*s);
	}
}icc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 4-main.c 4-print_rev.c -o 4-print_revi
