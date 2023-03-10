#include <stdio.h>
#include <stdlib.h>

/**
 *main - Entry Point
 *@argc: argument count
 *@argv: argument vector
 *Return: Always 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc > 0)
		printf("%d\n", argc - 1);
	return (0);
}
