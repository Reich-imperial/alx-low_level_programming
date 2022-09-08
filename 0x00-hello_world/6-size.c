#include <stdio.h>
/**
 *
 * main - Starting point
 * 
 * Return: Always 0 (succes)
 */
int main(void)
{
	int a;
	long int b;
	long long int c;
	char d;
	float f;

	printf("Size of a char : %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of an long int: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of an long long: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of an float: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
