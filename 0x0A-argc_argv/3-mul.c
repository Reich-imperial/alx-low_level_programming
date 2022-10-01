#include <stdio.h>
#include <stdlib.h>

/**
 * main - it multiplies two numbers
 * @argc: the cli arguements
 * @argv: an array
 * Return: returns 0
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
