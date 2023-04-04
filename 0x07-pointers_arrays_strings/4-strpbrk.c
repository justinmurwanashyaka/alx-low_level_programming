#include "main.h"
/**
* _strpbrk - A function that searches a string for any of a set of bytes
* @s: string
* @accept: holds a string
* Return: pointer to the byte s in accept or NULL
*/
char *_strpbrk(char *s, char *accept)
{
	int a;

	while (*s)
	{
		for (a = 0; accept[a]; a++)
		{
			if (*s == accept[a])
				return (s);
		}
		s++;
	}
	return ('\0');
}
