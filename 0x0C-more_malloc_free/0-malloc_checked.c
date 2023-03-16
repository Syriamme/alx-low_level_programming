#include "main.h"
#include <stdlib.h>

/**
 *malloc_checked- a function that allocates memory
 *@b: integer
 *Return: a pointet to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
