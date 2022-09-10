#include <stdio.h>

/**
 * main - program that prints the alphabets in lowercase,uppercase
 * you can only use putchar
 * Return: 0
 */

int main(void)
{
	char lw = 'a';
	char up = 'A';

	while (lw <= "z")
	{
		putchar(lw);
		lw += 1;
	}
	while (up <= "Z")
	{
		putchar(up);
		up += 1;
	}
	putchar ('\n');
	return (0);
}
