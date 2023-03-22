#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_name-  a function that prints a name.
 * @name- character string
 * @f- function pointer that takes a string argument
 * Return: name
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
