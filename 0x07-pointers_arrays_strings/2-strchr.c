#include "main.h"

/**
 *_strchr - function that locates a character
 *@s: string
 *@c: character being searched
 *Return: c or else NULL
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}

	return ('\0');
}
