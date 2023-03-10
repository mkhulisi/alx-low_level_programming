#include <stdio.h>
#include "main.h"
/**
 * main - program entry point, prints program file name
 * @argc: contains cli arguments count
 * @argv: an array containing the actual arguments
 *Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int x;
	
	x =0;
	
	while (x < argc)
	{
		printf("%s\n", argv[x]);
		x++;
	}
	return (0);
}
