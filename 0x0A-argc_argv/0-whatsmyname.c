#include <stdio.h>
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
		printf("%s\n", argv[0]);
		x++;
	}
	return (0);
}
