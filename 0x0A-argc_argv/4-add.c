#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - it adds positve numbers
 * @argc: the cli arguements
 * @argv: array of strings
 * Return: returns 0
 */

int main(int argc, char *argv[])
{
	int i;
	int sum = 0;
	char *ptr = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		sum += strtol(argv[i], &ptr, 10);
		if (*ptr != 0)
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
