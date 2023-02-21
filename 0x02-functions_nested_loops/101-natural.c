#include <stdio.h>

/**
 * main - Entry Point
 * Return: Always 0 (success)
 */

int main(void)
{
	int sum, i;

	for (i = 1023, sum = 0; i; i--)
		if (!(i % 3) || !(i % 5))
			sum += i;
	printf("%d\n", sum);
	return (0);
}
