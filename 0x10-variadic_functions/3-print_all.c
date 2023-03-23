#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>

/**
 * _strlen - string's size
 *
 * @format: string parameter
 *
 * Return: unsigned integer
 */
unsigned int _strlen(const char * const format)
{
	unsigned int size = 0;

	while (format[size])
	{
		size++;
	}

	return (size);
}

#include "variadic_functions.h"
/**
 * print_all - prints anything
 *
 * @format: variable's format to display
 */

void print_all(const char * const format, ...)
{
	va_list args;
	char c;
	int i;
	float f;
	char *s;
	const char *ptr;
	va_start(args, format);
	ptr = format;
	
	while (*ptr != '\0')
	{
		if (*ptr == 'c')
		{
			c = (char)va_arg(args, int);
			printf("%c ", c);
		}
		if (*ptr == 'i')
		{
			i = va_arg(args, int);
			printf("%d ", i);
		}
		if (*ptr == 'f')
		{
			f = (float)va_arg(args, double);
			printf("%f ", f);
		}
		if (*ptr == 's')
		{
			s = va_arg(args, char *);
			printf("%s ", s ? s : "(nil)");
		}
		ptr++;
	}
	printf("\n");
	va_end(args);
}
