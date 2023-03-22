#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - Function that searches for an integer
 * @array: Array of integer to be used
 * @size: Size of the array
 * @cmp: Function to compare integers
 * Return: Index in arra of the first match
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size < 0)
		return (-1);
	if (array == NULL || size == 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
