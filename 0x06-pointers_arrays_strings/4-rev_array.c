#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array
 * @n: number of elements
 * Return: Void
 */

void reverse_array(int *a, int n)
{
	int i;
	int rev;

	for (i = 0; i < n / 2; i++)
	{
		rev = a[i];
	a[i] = a[n - i - 1];
	a[n - i - 1] = rev;
	}
}
