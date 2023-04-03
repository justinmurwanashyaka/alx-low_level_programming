#include <stdio.h>
/**
 * main - program that print base 16
 * Return: 0
 */
int main(void)
{
	int i = 0;
	char c;

	while (i < 16)
	{
		if (i < 10)
			c = i + '0';
		else
			c = i + 'a' - 10;
		putchar(c);
		i++;
	}
	putchar('\n');
	return (0);
}
