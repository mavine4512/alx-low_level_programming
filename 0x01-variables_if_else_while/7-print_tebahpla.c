#include <stdio.h>

/**
 * main - print the alphabets in reverse order lowercase
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char N;

	for (N = 'z'; N >= 'a'; N--)
	{
		putchar(N);
	}
	putchar('\n');
	return (0);
}
