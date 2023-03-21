#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - prints the alphabet in lowercase
 *
 * @alp: array of characters containing the alphabet
 *
 * Return: None
 */
void print_alphabet(char alp[])
{
	int i = 0;

	while (alp[i] != '\0')
	{
		putchar(alp[i]);
		i++;
	}
}


/**
 * main - print the alphabet in lowercase
 *
 * Return: Always 0
 */
int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";

	print_alphabet(alp);
	return (0);
}
