#include "main.h"

/**
 *binary_to_uint-a function that converts a binary number to an unsigned int
 *@b: pointer to a string containing 0s and 1s
 *Return: the converted number
 *
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;
	int count = 0;

	if (!b)
		return (0);
	while (b[count] != '\0')
	{
		if (b[count] != '0' && b[count] != '1')
			return (0);
		sum = (sum << 1) + (b[count] - '0');
		count++;
	}
	return (sum);
}




