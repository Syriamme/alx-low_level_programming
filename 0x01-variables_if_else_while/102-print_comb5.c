#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int nms1, nms2;

	for (nms1 = 0; nms1 <= 98; nms1++)
	{
		for (nms2 = (nms1 + 1); nms2 <= 99; nms2++)
		{
			putchar((nms1 / 10) + '0');
			putchar((nms1 % 10) + '0');
			putchar(' ');
			putchar((nms2 / 10) + '0');
			putchar((nms2 % 10) + '0');

			if (nms1 == 98 && nms2 == 99)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
