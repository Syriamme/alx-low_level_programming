#include "main.h"

/**
 *get_bit -a function that returns the value of a bit at a given index
 *@n: unsigned int
 *@index: where the value will be returned
 *Return: Value of a bit at a given index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int siz_t;
	unsigned long int mask, value;

	siz_t = (8 * sizeof(unsigned long int));

	if (index >= siz_t * 8)
		return (-1);
	else if
	{
		mask = n >> index;
		value = ((mask) & 1);
		return (value);
	}
}
