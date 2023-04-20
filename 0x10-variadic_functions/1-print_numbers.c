#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - Function that prints numbers, followed by a new line
 * @separator: strig to be printed btwn numbers
 * @n: params passed in a function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_last last;

	va_start(last, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(list, int));
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	print("\n");

	va_end(list);
}
