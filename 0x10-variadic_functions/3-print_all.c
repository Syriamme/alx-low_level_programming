#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>

/**
 * _strlen - string's size
 *
 * @format: string parameter
 *
 * Return: unsigned integer
 */
unsigned int _strlen(const char * const format)
{
	unsigned int size = 0;

	while (format[size])
	{
		size++;
	}

	return (size);
}

#include "variadic_functions.h"
/**
 * print_all - prints anything
 *
 * @format: variable's format to display
 */

void print_all(const char * const format, ...) {
    va_list args;
    va_start(args, format);
    
    const char *ptr = format;
    int i_var;
    float f_var;
    char c_var;
    char *s_var;
    
    while (*ptr) {
        if (*ptr == 'c') {
            c_var = (char)va_arg(args, int);
            printf("%c", c_var);
        }
        if (*ptr == 'i') {
            i_var = va_arg(args, int);
            printf("%d", i_var);
        }
        if (*ptr == 'f') {
            f_var = (float)va_arg(args, double);
            printf("%f", f_var);
        }
        if (*ptr == 's') {
            s_var = va_arg(args, char *);
            printf("%s", s_var ? s_var : "(nil)");
        }
        
        ptr++;
    }
    
    printf("\n");
    va_end(args);
}
