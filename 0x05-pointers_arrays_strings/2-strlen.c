#include "main.h"

/**
 *_strlen - a function that returns the length of a string
 *
 *@s: The string
 *
 *Return:  length of a string
 *
*/
int _strlen(char *s)
{
	int len;

	for (int i = 0; s[i] != '\0', i++)
	{
		len++;
	}
	return (len);
}
