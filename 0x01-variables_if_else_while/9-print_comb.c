#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int numbers;

	for (numbers = '0'; numbers <= '9'; numbers++)
	{
		putchar(numbers);

		if (numbers == '9')
		{
			break;
		}
		{
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
