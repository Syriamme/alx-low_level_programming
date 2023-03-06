#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: Character string to be evaluated
 * @accept: Substring to be checked
 * Return: Length of prefix in bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;
	unsigned int sum = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for  (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				sum++;
				break;
			}
		}
	}
	return (sum);
}
