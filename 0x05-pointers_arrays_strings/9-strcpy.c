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

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
