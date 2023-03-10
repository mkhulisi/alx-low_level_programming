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
	printf("%s\n", argv[0]);
	return (0);
}
