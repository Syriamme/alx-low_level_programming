#include "main.h"

/**
 *_strcmp-  a function that compares two strings
 *@s1 - string one
 *@s2 - string two
 *Return
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	for (i = 0; *s1 != '\0' && *s2 != '\0'; i++)
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		return (0);
	}
}

