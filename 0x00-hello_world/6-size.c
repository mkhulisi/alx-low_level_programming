#include <stdio.h>
/**
 * main - Program entry point function
 * Description: the funtion prints the size of various C data types
 * Return: 0 on success or none zero integer on failure
 */
int main(void)
{

	printf("Size of char is %ld byte(s)\n", sizeof(char));
	printf("Size of int is %ld byte(s)\n", sizeof(int));
	printf("Size of long int is %ld byte(s)\n", sizeof(long));
	printf("Size of long long int is %lld byte(s)\n", sizeof(long long int));
	printf("Size of float is %ld byte(s)\n", sizeof(float));
	return (0);
}
