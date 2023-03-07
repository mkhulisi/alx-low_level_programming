#include <stdio.h>
#include "main.h"
/**
 * _strpbrk - Entry point
 * @s: param one
 * @accept: param two
 * Return: A pointer to the byte in @s
 */
char *_strpbrk(char *s, char *accept)
{
	int i, n;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (s[i] == accept[n])
				return (s + i);
		}
	}

	return (NULL);
}
