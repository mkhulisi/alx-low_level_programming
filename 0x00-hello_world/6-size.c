#include <stdio.h>
/**
 * main - Program entry point function
 * Description: the funtion prints the size of various C data types
 * Return: 0 on success or none zero integer on failure
 */
int main(void)
{

	printf("Size of a char: %ld byte(s)\n", sizeof(char));
	printf("Size of an int: %ld byte(s)\n", sizeof(int));
	printf("Size of long int is %ld byte(s)\n", sizeof(long));
	printf("Size of a long long int: %lld byte(s)\n", sizeof(long));
	printf("Size of a float: %ld byte(s)\n", sizeof(float));
	return (0);
}
