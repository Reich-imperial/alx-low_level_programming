#include <stdio.h>
/**
 * main - Starting point
 * 
 * Description: using the main function
 * Return: Always 0 (succes)
 */
int main(void)
{
	int a;
	long int b;
	long long int c;
	char d;
	float f;
	printf("Size of a char : %1d byte(s)\n", sizeof(d));
	printf("Size of an int: %1d byte(s)\n", sizeof(a));
	printf("Size of an long int: %1d byte(s)\n", sizeof(b));
	printf("Size of an long long: %1d byte(s)\n", sizeof(c));
	printf("Size of an float: %1d byte(s)\n", sizeof(f));
	return (0);
}
