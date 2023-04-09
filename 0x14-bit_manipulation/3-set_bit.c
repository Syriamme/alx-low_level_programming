#include "main.h"

/**
 *set_bit - a function that sets the value of a bit to 1
 *@n:pointer to unsigned long int  
 *@index: where the sets value of bit
 *Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int siz_t;
	unsigned long int bitmask;

	siz_t = (8 * sizeof(unsigned long int));
	
	if (index >= siz_t)
		return (-1);
	{
		bitmask = 1 << index;
		*n = (*n | bitmask);
		return (1);
	}	
}
