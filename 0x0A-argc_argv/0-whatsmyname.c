#include <stdio.h>
#include <stdlib.h>

/**
 *main - Entry Point
 *@argc: argument count
 *@argv: argument vector
 *Return: Always 0
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
