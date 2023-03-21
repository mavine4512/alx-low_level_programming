#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - print the alphabet in lowercase ten time
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		int x;

		for (x = 0; x < 10; x++)
		{
			putchar(alp[i]);
		}
		putchar('\n');
	}
}
