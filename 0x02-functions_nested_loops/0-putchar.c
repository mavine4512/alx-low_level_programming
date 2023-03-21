#include "main.h"

/**
 * main - prints _putchar
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char str[] = "_putchar\n";
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	return (0);
}
