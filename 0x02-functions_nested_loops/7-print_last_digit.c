#include "main.h"

/**
 * print_last_digit - Function printing the last digit
 * @r: Integer
 * Return: Last digit
 */

int print_last_digit(int r)
{
	int last;

	last = (r % 10);

	if (last < 0)
		last = last * -1;

	_putchar(last + '0');

	return (last);
}
