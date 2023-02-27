#include "main.h"
#include <stdio.h>

/**
 * print_array - printing half a string
 * @a: array
 * @n: length of array
 * Return: void
 */

void print_array(int *a, int n)
{
	int len = 0;

	while (len < n)
	{
		if (len != (n - 1))
			printf("%i, ", a[len]);
		else
			printf("%i", a[len]);
		len++;
	}
	printf("\n");
}
