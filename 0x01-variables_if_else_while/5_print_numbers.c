#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num[10] = "0123456789"
	int i;

	for (i = 0; i < 10; i++)
		printf("%d", num[i]);
	printf("\n");
	return (0);
}
