#include "main.h"

/**
 * find_root - A function to find square root of a number
 * @n:number to be evaluated
 * @rt: root
 * Return: square root
 */

int find_root(int n, int rt)
{
	if ((rt * rt) > n)
	{
		return (-1);
	}
	if ((rt * rt) == n)
	{
		return (rt);
	}
	return (find_root(n, rt + 1));
}

/**
 * _sqrt_recursion - Returning Square root of a number
 * @n: number
 * Return: square root of the number
 */


int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (find_root(n, 0));
}
