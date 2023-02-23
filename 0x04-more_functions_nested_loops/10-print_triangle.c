#include "main.h"

/**
 * print_triangle - Function to print a triangle
 * @size: Size of the triangle
 * Return: Void
 */

void print_triangle(int size)
{
	int a;
	int c;
	int b;

	if (size > 0)
	{
		for (a = 1; a <= size; a++)
		{
			for (c = 1; c <= (size - a); c++)
			{
				_putchar(' ');
			}

			for (b = 1; b <= a; b++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
