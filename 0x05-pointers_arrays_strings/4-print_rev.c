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

	while (s[i] != '\0')
	{
		len++;
	}
	for (len = len - 1; len > 0; len--)
	{
		_putchar(s[len]);
	}
	_putchar('\n');
}
