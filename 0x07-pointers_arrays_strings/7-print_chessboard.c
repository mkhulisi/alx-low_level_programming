#include <stdio.h>
#include "main.h"
/**
 * print_chessboard -Function that prints chessboard
 * @a: an array of 8 elements
 * Return: Void, nothing
 */
void print_chessboard(char (*a)[8])
{
	int x, n;

	for (x = 0; x < 8; x++)
	{
		for (n = 0; n < 8; n++)
			pritf("%c",a[x][n]);
		printf("\n");
	}
}
