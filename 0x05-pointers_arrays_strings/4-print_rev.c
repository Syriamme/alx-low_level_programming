#include "main.h"

/**
 * print_rev - function that prints a string in reverse
 * @s: The string
 * Return: Void
 *  
*/

void print_rev(char *s)
{
	int length = 0;
	while (s[length] != '\0')
	{
		length++
	}
	for (int i= length - 1; 1>= 0; i--)
	{
		_putchar (s[i]);
	}
	{
		_putchar ('\n');
	}
}
