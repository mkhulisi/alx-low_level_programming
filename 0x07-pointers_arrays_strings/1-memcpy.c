
#include "main.h"
/**
 * _memcpy - a function that copies memory area.
 * @dest: first param
 * @src: second param
 * @n: third param
 * Return: a pointer to copied memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
		dest[x] = src[x];

	return (dest);
}
