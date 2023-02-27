#include "main.h"
/**
*swap_int - swapps two variables values
*@a: first pointer parameter
*@b: second pointer parameter
*Return: void, nothing
*/
void swap_int(int *a, int *b)
{

	int k;

	k = *a;
	*a = *b;
	*b = k;
}

