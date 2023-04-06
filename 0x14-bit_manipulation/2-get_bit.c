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
	siz_t = (8 * sizeof(unsigned long int));

	if (n != '\0')
		return (0);
	if (index >= siz_t)
		return (-1);
	else
		return ((n >> index) & 1);
}
