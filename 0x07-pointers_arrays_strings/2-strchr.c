#include "main.h"
/**
* _strchr - A function that locates a character in a string
* @s: string
* * @c: character
* Return: a pointer to c in s or NULL
*/
char *_strchr(char *s, char c)
{
	int a = 0, b;

	while (s[a])
		a++;
	for (b =0; b < a; b++)
	{
		if (c == s[b])
		s += b;
		return (s);
	}
	return ('\0');
}
