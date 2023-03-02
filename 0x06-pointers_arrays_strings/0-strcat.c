#include "main.h"

/**
 *_strcat - a function that concatenates two strings
 *@dest: destination
 *@src: source
 *Return: returns a pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	char *temp = dest;

	while (*temp != '\0')
	{
		temp++;
	}
	while (*src != '\0')
	{
		*temp = *src;
		src++;
		temp++;
	}
	*temp = '\0';
	return (dest);
}
