#include "main.h"

/**
 *print_rev - a function that prints a string in reverse
 *@s: The string
 *Return: Void
 *
 */

void print_rev(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	for (int i = length -1; i >= 0; 1--)
	{
		_putchar(s[i]);
	}
}
