#include "main.h"
/**
  * _islower - check if a character is an alphabet or not
  *@c: the character to check
  * Return: 1 if character is alphabet 0 otherwise
  */
int _islower(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}

	return (0);
}