#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Assign a random number to a variable n each time it is executed
 *
 * Return: Alway 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 6 || n < 0)
	{
		printf("Last digit of %d is 5 and is greater than 5\n", n);
	}
	else if (n == 0)
	{
		printf("Last digit of %d is 0 and is 0\n", n)
	}
	else
	{
		 printf("Last digit of %d is 5 and is greater than 5\n", n);
	}
	return (0);
}
