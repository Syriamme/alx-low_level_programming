#include <stdarg.h>

/**
 * sum_them_all - Returnd the sum of all its parameters
 * @n: Number of variable arguments
 * Return: If the value of n is zero, it returns zerp
 *		else, it returns sum.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i, sum = 0;

	if (n == 0)
		return (0);

	va_start(args, n);
	sum = 0;

	for (i = 0; i < n; i++)
		sum += va_arg(args, int);
	va_end(args);
	return (sum);
}
