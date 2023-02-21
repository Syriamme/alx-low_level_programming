#include "main.h"

/**
 * print_alphabet - Function to list alphabets
 * Return: Does not return any value(s)
 */

void print_alphabet(void)
{
	char ch;

	ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
