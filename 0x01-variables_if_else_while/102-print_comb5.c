#include<stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int m;
	int x;
	int k;
	int p;

	for (m = '0'; m <= '9'; m++)
	{
		for (x = '0'; x <= '9'; x++)
		{
			for (k = (m + 1); k <= '9'; k++)
			{
				for (p = (x + 1); p <= '9'; p++)
				{
					putchar(m);
					putchar(x);
					putchar(' ');
					putchar(k);
					putchar(p);
					if (!((m == '9' && x == '9') && (k == '9' && p == '9')))
					{
						putchar(',');
						putchar(' ');
					}
				}
				p = '0';
			}
		}
	}
	putchar('\n');

	return (0);
}
