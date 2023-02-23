#include "main.h"

/**
 * print_line - Function to draws a straight line
 * @n: Integer being used
 * Return: void
 */

void print_line(int n)
{
	int x;

	if (n > 0)
	{
		for (x = 0; x < n; x++)
			_putchar('_');
		_putchar('\n');
	}
	else
		_putchar('\n');
}
