#include "main.h"
/**
* _memcpy - A function that copies memory area
* @dest: memory destination
* @src: memory source
* @n: size of bytes
* Return: dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
