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
		s++;
		len++;
	}
	s--;
	for (i = len; i => 0; i--)
	{
		_putchar(*s);
		s--;
	}
}
