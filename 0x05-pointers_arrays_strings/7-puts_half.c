#include "main.h"

/**
 * puts_half - printing half a string
 * @str: The string
 * Return: Void
 */

void puts_half(char *str)
{
	int len = 0;
	int half;

	while (str[len] != '\0')
		len++;
	half = (len) / 2;

	if (i % 2 != 0)
		half = ((len - 1) / 2) + 1;
	for (; half < len; half++)
		_putchar(str[half]);
	_putchar('\n');
}
