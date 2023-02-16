#include <stdio.h>
/**
 * main - program entry pont
 * Description: print out string to stderror
 * Return: 0 on success none zero integer otherwise
 */
int main(void)
{

	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	exit(1);
}
