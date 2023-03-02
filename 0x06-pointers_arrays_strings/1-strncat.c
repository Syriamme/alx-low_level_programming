#include "main.h"

/**
 *_strncat - a function that concatenates two strings
 *@dest: destination
 *@src: source
 *@n: Interger
 *Return: dest
*/
char *_strncat(char *dest, const  char *src, int n)
{
	int dest_len = strlen(dest);
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];

	return (dest);
}
