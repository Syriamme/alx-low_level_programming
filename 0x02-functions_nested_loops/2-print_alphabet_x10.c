#include "main.h"

/**
 * print_alphabet_x10 - Function to list alphabets 10 times
 * Return: Does not return any value(s)
 */

void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i <= 10; i++)
	{
		char u;

		for (u = 'a'; u <= 'z'; u++)

			_putchar(u);
		_putchar('\n');
	}
}

