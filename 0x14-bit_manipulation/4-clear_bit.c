#include "main.h"

/**
 *clear_bit - a function to set bit value to 0
 *@n: the integer
 *@index: wehere to set 0
 *Return: 1 if it worked or -1 if it failed
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bitmask, siz_t;

	siz_t = sizeof(unsigned long int) * 8;

	if (index >= siz_t)
		return (-1);
	bitmask = ~(1 << index);
	*n = (*n & bitmask);
	return (1);
}
