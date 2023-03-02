#include "main.h"

/**
 *cap_string- function that capitalizes all words
 *@str: a string
 *Return: str
 */

char *cap_string(char *str)
{
	int i, k;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 'a' - 'A';
		}
		if (str[i] == ',' || str[i] == ';' ||
				str[i] == '.' ||
				str[i] == '!' ||
				str[i] == '?' ||
				str[i] == '"' ||
				str[i] == '(' ||
				str[i] == ')' ||
				str[i] == '{' ||
				str[i] == ' ' ||
				str[i] == '}' ||
				str[i] == '\t' ||
				str[i] == '\n')
		{
			for (k = i + 1; str[k] != '\0'; k++)
			{
				if (str[k] >= 'a' && str[k] <= 'z')
				{
					str[k] -= 'a' - 'A';
				}
				else
				{
					break;
				}
			}
			i = k - 1;
		}
	}
	return (str);
}
