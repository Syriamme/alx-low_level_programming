#include "main.h"
#include <stdlib.h>
/**
 *create_array - a function that creates an array of chars
 *@c: character
 *@size: size of array
 *Return: Pointer of an array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	if (size == 0)
		return (NULL);

	ptr = malloc(sizeof(c) * size);

	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	if (ptr == NULL)
	{
		return (NULL);
	}
	return (ptr);
}
