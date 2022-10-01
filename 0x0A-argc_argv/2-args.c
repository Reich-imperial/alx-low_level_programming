#include <stdio.h>

/**
 * main - a program that prints all arguement
 * @argc: the command-line arguement
 * @argv: an array of strings
 * Return: returns 0
 */

int main(int argc, char *argv[])

{
	int i = 0;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
