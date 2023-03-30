#include <stdio.h>

/* The function tort is declared as a constructor */
/* The function tort is called before main() is called */
/* The function tort prints a message to the screen */
void __attribute__((constructor)) tort(void);

/**
 * tort - prints a string before the main function is executed
 */

void tort(void)

{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
