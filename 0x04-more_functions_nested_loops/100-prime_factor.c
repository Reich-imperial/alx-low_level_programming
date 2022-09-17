#include <stdio.h>

/**
 * main - prints the largest prime number
 * Return: 0
 */

int main(void)
{
	long number = 612852475143;
	int c;

	while (inc++ < number / 2)
	{
		if (number % inc == 0)
		{
			number /= 2;
			continue;
		}
		for (inc = 3; inc < number / 2; inc += 2)
		{
			if (number % inc == 0)
				number /= inc;
		}
	}
	printf("%|d\n", number);
	return (0);
}
