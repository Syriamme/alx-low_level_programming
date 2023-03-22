#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry Point
 * @argc: Argument Count
 * @argv: Argument Vector
 * Return: Result of the operations
 */

int main(int argc, char *argv[])
{
	int answer;
	int a, b;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	op = argv[2];

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*op == '/' || *op == '%') && (b == 0))
	{
		printf("Error\n");
		exit(100);
	}

	answer = get_op_func(op)(a, b);
	printf("%d\n", answer);
	return (0);
}
