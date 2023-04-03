#include <stdio.h>
/**
 * main - function that print alphabet in lowercase and uppercase
 * Return: 0
 */
int main(void)
{
	int i = 97;
	int j = 65;

	while (i <= 122)
	{
		putchar(i);
		i++;
	}
	while (j <= 90)
	{
		putchar(j);
		j++;
	}
	putchar('\n');
	return (0);
}
