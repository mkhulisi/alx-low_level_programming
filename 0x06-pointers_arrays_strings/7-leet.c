#include "main.h"
/**
 * leet - encode into 1337leet
 * @n: input value
 * Return: n value
 */
char *leet(char *n)
{
	int j;
	int x;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (x = 0; n[x] != '\0'; x++)
	{
		for (j = 0; j < 10; j++)
		{
			if (n[x] == s1[j])
			{
				n[x] = s2[j];
			}
		}
	}
	return (n);
}
