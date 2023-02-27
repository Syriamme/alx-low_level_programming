#include "main.h"

/**
 *_strcpy - Function copying string
 * @dest: Destination buffer
 * @src: source array
 *Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int count;

	while (src[i] != '\0')
		i++;
	for (count = 0; count <= i; count++)
		dest[count] = src[count];
	return (dest);
}
