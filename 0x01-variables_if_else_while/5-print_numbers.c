#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0,
 * using printf
 *
 * Return: Always 0 (Success)
 */
int main()
{
	char M[10] = "0123456789";
	int n;
	
	for (n = 0; n < 10; n++)
	{
		printf(M[n]);
	}
	printf("\n");
	return (0);
}
