#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

	int main(void)
{
	char abc;

	for (abc = 'a'; abc <= 'z'; abc++)
	{
		if (abc == 'e' || abc == 'q')
		continue;
	}
	{
		putchar(abc);
	}
		return (0);
}
