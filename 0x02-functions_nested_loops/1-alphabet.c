#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - print the alphabet in lowercase
 *
 * Return: void
 */
void print_alphabet(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
}
