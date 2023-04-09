#include "main.h"

/**
 *flip_bits - a function that returns the number of bits 
 *you would need to flip
 *@n- the integer
 *@m- the integer
 *Return: returns count, the number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int temp;
	unsigned int result = 0;

	temp = n ^ m;
	 while (temp != 0)
	 {
		 result += temp & 1;
		 temp >>= 1;
	 }
	 return (result);
}
