#include "main.h"
#include <stdlib.h>

/**
 *str_concat- a function that concatenates two strings
 *@s1: string one
 *@s2: string two
 *Return: pointer to newly allocated memory space
 *
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0;
	int len1 = 0, len2 = 0;
	char *result;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	result = (char *) malloc(sizeof(char) * (len1 + len2 + 1));
	if (result == NULL)
	{
		return (NULL);
	}
	while (i < len1)
	{
		result[i] = s1[i];
		i++;
	}
	while (j < len2)
	{
		result[i] = s2[j];
		i++;
		j++;
	}
	result[i] = '\0';
	return (result);
}
