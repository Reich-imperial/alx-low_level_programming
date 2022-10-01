#include <stdio.h>

/**
 * main - a program that prints number of arguements
 * @argc: the number of comandline arguements
 * @argv: an array of strings
 * Return: returns 0
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
