#include "main.h"

/**
 *print_binary - A function that prints the binary representation
 *@n: the binary number
 *Return: Always (0) success
 */
void print_binary(unsigned long int n)
{
	if (n != '\0' && n > 1)
		print_binary(n >> 1);
	_putchar ((n & 1) ? '1' : '0');
}
