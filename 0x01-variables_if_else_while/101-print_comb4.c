#include<stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x;
	int b;
	int k;

	for (x = '0'; x <= '9'; x++)
	{
		for (b = (x + 1); b <= '9'; b++)
		{
			for (k = (b + 1); k <= '9'; k++)
			{
				putchar(x);
				putchar(b);
				putchar(k);
				if ((x != '7') || (b != '8') || (k != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
