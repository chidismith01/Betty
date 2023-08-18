#include <stdio.h>
/**
 * main - Entry point
 *
 * A program that prints the size of various types in c
 *
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	/* declaring variables of different types */
	char n;
	int m;
	long int o;
	long long int p;
	float f;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(n));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(m));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(o));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(p));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
