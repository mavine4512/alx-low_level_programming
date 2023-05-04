#include "main.h"
#include <stdio.h>

/**
 * print_binary - Binary representation of a number
 * @n: decimal number to print as binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int bitmask = 1UL << (sizeof(n) * 8 - 1);
	int printed = 0;

	while (bitmask > 0)
	{
		if (n & bitmask)
		{
			printf("1");
			printed = 1;
		}
		else if (printed)
		{
			printf("0");
		}
		bitmask >>= 1;
	}
	if (!printed)
	{
		printf("0");
	}
}
