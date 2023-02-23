#include "main.h"

/**
*print_numbers - a function that prints the numbers.
*
*@i - numbers.
*Return: Always 0 (Success).
*/

void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)

	{
		_putchar(i);
	}

	_putchar('\n');
}
