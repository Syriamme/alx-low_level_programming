#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a new space
 * @str: String to be allocated to new space
 * Return: Pointer to a character array
 */
char *_strdup(char *str)
{
	unsigned int i = 0;
	char *str2;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
		i++;
	str2 = malloc((i + 1) * sizeof(char));
	if (str2 == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
		str2[i] = str[i];
	str2[i] = '\0';
	return (str2);
}
