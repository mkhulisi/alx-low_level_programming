#include "main.h"
/**
 * _strncpy - copy a string
 * @dest: first parameter
 * @src: second parameter
 * @n: third parameter
 *
 * Return: dest coppyed string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}

	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}
