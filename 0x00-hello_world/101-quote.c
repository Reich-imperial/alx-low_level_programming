#include <stdio.h>
#include <unistd.h>
/**
 * main - entry point
 * description: you are not allowed to use any function listed
 * Return: Always 0
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
			sizeof("and that piece of art is useful\" - Dora korpar, 2015-10-19"));
	return (1);
}

