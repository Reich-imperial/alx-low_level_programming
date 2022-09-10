#include <stdio.h>

/*
 * main - Program that prints the alphabet in lowecase and then in uppercase
 *
 * Description: Using the main function
 * You can only use the putchar function
 * Return: 0
 */

int main(void)
{
	char ch;

	for (ch = "a"; ch <= "z"; ch++)
	{
		putchar(ch);
	}
	for (ch = "A"; ch <= "Z"; ch++)
	{
		putchar(ch);
	}
	putchar("\n");
	return (0);
}
