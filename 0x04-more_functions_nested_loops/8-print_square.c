#include "main.h"

/**
 * print_square - Drawing a square using #
 * @size: Size of the Square
 * Return: void
 */

void print_square(int size)
{
	int length;
	int width;

	if (size > 0)
	{
		for (width = 0; width < size; width++)
		{
			for (length = 0; length < size; length++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
