#include "main.h"
/**
  * _abs - calculates the absolute value of a number
  *@c: the number to check
  * Return: absolute value of of a number
  */
int _abs(int c)
{
	int absval;

	if (c < 0)
	{
		absval = c * -1;
		return (absval);
	}
	return (c);
}

