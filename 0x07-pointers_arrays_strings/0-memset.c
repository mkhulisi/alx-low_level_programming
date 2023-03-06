
#include "main.h"
/**
 * _memset - writes constant bite into memory
 *
 * @s: pointer to memory area to write to
 * @n: the number of bytes to write
 * @b: constant byte
 *
 * Return: a pointer to the memory area @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	x = 0;

	while (x < n)
	{
		s[x] = b;
		x++;
	}
	return (s);
}
