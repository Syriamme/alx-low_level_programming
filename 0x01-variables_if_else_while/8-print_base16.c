#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int dj;
	int ad;

	for (dj = '0'; dj <= '9'; dj++)
	{
		putchar(dj);
	}

	for (ad = 'a'; ad <= 'f'; ad++)

	{
		putchar(ad);
	}
	putchar('\n');
	return (0);
}
