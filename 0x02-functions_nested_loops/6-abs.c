#include "main.h"

/**
 * _abs - Function to check absolute value of an integer
 * @n: An Integer value to be evaluated
 * Return: An Absolute value of the integer i
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}

	else if (n < 0)

	{
		return (-n);
	}

	else

	{
		return (0);
	}
}
