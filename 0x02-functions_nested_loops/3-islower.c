#include "main.h"
/**
  * _islower - check if a character is lower or uppercas
  *
  * Return: 1 if lowercase 0 otherwise
  */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}

	return (0);
}
