#include <stdio.h>
/**
 * main - The program that print the size of the computer
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char s;
	int i;
	long int j;
	long long int k;
	float f;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(s));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(j));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(k));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
