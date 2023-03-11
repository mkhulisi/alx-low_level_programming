#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the minimum coin change for an amount of money
 * @argc: contains cli arguments count
 * @argv: an array containing the actual arguments
 *Return: 0 on success 1 on error
 */
int main(int argc, char *argv[])
{
	int amount
	int coins;

	amount = 0;
	coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	amount = atoi(argv[1]);

	if (amount <= 0)
	{
		printf("0\n");
		return (1);
	}

	coins += amount / 10;
	amount %= 10;
	coins += amount / 5;
	amount %= 5;
	coins += amount / 1;
	printf("%d\n", coins);
	return (0);
}
