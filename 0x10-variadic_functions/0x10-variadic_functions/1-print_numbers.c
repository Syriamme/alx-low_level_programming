#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_numbers - Prints numbers
 *		- Followed by a new line
 * @separator: Separates numbers
 * @n: Numbers of integers passed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int i;
	int x;

	va_start(nums, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(nums, int);

		printf("%d", x);

		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
}
