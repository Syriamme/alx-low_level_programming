#include "main.h"
#include <string.h>
/**
 *_strncat - a function that concatenates two strings
 *
 *@dest: destination
 *@src: source
 *@n: interger
 *
 *Return: dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int dest_len = strlen(dest);
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];

	return (dest);
}
