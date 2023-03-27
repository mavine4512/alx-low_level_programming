#include "main.h"

/**
 * _puts - print a string and a new line
 * @str: pointer to string to be printed
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
