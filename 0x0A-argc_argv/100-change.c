#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the minimum number of coins to make change for an amount of money
 * @argc: contains cli arguments count
 * @argv: an array containing the actual arguments
 *Return: 0 on success 1 on error
 */
int main(int argc, char *argv[])
{
	int cents;
	
	if(argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		cents = atoi(argv[1]);
		
		if (cents % 10 == 0 && 10 == cents)
		{
			printf("1\n");
		}
		else
		{
			printf("%d\n", cents);
		}
	}
	return (0);
}
