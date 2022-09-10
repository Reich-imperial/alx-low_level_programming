#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print ifnnumber is positive ,zero or negatve.
 *
 * Description: ysing main function
 * Programming is positive, zero, or negative
 * Return: 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* my code here */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
