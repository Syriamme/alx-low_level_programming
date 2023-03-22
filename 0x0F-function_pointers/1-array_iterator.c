#include "function_pointers.h"

/**
 * array_iterator - Executes an action on each element of array
 * @array: Array to be used
 * @size: Size of array
 * @action: Funtion to be ran on each element of array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL)
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
}
