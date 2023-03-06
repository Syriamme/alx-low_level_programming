#include "main.h"

/**
 *_strpbrk - a function that searches a string for any set of bytes
 *@s: string
 *@accept: string
 *Return: bytes in the string
 */
char *_strpbrk(char *s, char *accept)
{
	long int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}
	return ('\0');
}
