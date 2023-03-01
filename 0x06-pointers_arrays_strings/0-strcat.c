#include <stdio.h>
#include "main.h>"

/**
 * _strcat -join two strings and return string pointer
 * @dest: pointer param for primary string
 * @src: string to concatenate to @dest
 * Return: pointer of concated string to update
 */
char *_strcat(char *dest, char *src)
{
	int dest_size;
	int src_size;
	int concate_size;
	int x;

	dest_size = 0;
	src_size = 0;
	x = 0;

	while (dest[dest_size] != '\0')
	{
		dest_size++;
	}

	while (src[src_size] != '\0')
	{
		src_size++
	}

	concate_size = src_size + dest_size;

	while (x <= concate_size)
	{
		dest[
