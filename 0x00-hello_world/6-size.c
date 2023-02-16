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
	printf("Size of float is %ld byte(s)\n", sizeof(float));
	printf("Size of double is %ld byte(s)\n", sizeof(double));
	return (0);
}
