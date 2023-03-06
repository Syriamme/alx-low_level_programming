#include "main.h"

/**
 *_strstr - a function that locates a substring
 *@haystack: string
 *@needle: substring
 *Return: haystack
 */

char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	for (; *haystack != '\0'; haystack++)
	{
		h = haystack;
		n = needle;

		while (*h == *n && *n != '\0')
		{
			h++;
			n++;
		}
		if (*n == '\0')
		{
			return (haystack);
		}
	}
	return ('\0');
}
