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
	long x = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 6 || n < 0)
	{
		printf("Last digit of %d is %lu  less than 6 and not 0\n", n, &x);
	}
	else if (n == 0)
	{
		printf("Last digit of %d is %lu and is 0\n", n, &x)
	}
	else
	{
		 printf("Last digit of %d is %lu and is greater than 5\n", n, &x);
	}
	return (0);
}
