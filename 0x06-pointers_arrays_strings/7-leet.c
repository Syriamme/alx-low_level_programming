#include "main.h"

/**
 * leet - Function that encodes a string into 1337
 * @str: String to be encoded
 * Return: Array of the news string
 */

char *leet(char *str)
{
	int a[11] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int b[11] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	int index, index2;

	for (index = 0; str[index] != '\0'; index++)
	{
		for (index2 = 0; a[index2] != '\0'; index2++)
		{
			if (str[index] == a[index2])
			{
				str[index] = b[index2];
			}
		}
	}
	return (str);
}
