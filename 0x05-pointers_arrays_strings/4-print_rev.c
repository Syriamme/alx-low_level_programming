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

	while (s[len] != '\0')
	{
		len++;
	}
	for (int i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
}
