#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - Function that prints a name
 *
 * @name: The name being printed, which is a string
 * @f: A function pointer
 *
 * Return: ()
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
	else
		return;
}
