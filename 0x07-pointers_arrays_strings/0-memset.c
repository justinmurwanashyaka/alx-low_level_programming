#include "main.h"
/**
* _memset - A function that fills memory with constamt byte
* @s: Memory area
* @b: constant byte
* @n: size
*  Return: a pointer to the memory area s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
