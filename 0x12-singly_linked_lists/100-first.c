#include <stdio.h>

void __attribute__ ((constructor))first(void);

/**
 * first - Print a sentence befor the main
 * function is executed
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
