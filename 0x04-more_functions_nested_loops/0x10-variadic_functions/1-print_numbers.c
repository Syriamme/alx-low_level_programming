#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers followed by a new line
 *
 * @separator: string to be printed between numbers
 * @n: numbers of integers passed to the function
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int j;
	va_list nums;
	unsigned int i;

	va_start(nums, n);

	for (i = 0; i < n; i++)
	{
		j = va_arg(nums, int);

		printf("%d", j);

		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
}
