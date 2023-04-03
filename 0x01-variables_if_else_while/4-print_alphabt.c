#include <stdio.h>
/**
 * main - function that will prints the albhabet in lowcase
 * flowed by a new line.
 * Return: 0
 */
int main(void)
{
	int a =97;

	while (a <= 122)
	{
		if (a == 101 || a == 113)
		{
			a++;
		}
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
