#include "3-calc.h"
#include <stddef.h>

/**
 * get_op_func - Select the correct function to use
 * @s: Operator passed as argument
 * Return: Pointer to operator function to use
 */

int (*get_op_func(char *s))(int a, int b)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL)
	{
		if (*s == ops->op[i])
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
