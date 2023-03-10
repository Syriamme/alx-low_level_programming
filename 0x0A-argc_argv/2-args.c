#include <stdio.h>

/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument Vector
 * Return: Always zero (Success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
