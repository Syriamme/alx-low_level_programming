#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - printing the sum of the two diagonals
 * @a: square matrix
 * @size: size of the matrix
 */

void print_diagsums(int *a, int size)
{
	unsigned int total = 0;
	unsigned int total2 = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		total += a[i];
		a += size;
	}
	a -= size;
	for (i = 0; i < size; i++)
	{
		total2 += a[i];
		a -= size;
	}
	printf("%d, %d\n", total, total2);
}
