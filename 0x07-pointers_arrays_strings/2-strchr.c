
#include <stdio.h>
#include "main.h"

/**
 * _strchr - a function that locates a character in a string
 * @s: string for processing
 * @c: character to locate
 * Return: a pointer to the first occurrence of the characte
 */
char *_strchr(char *s, char c)
{
	int x;

	for (x = 0; s[x] >= '\0'; x++)
	{
		if (s[x] == c)
			return (s + x);
	}

	return (NULL);
}
