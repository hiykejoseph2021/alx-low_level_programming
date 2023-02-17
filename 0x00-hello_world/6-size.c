#include <stdio.h>

/**
 * main -prints "central part of code and prints size of datatypes
 *
 * Return: Always 0.
 */

int main(void)
{
	printf("size of a char: %lu byte(s)\n", sizeof(char));
	print("size of an int: %lu byte(s)\n", sizeof(int));
	printf("size of a long int: %lu byte(s)\n", sizeof(long int));
	printf("size of a long long int: %lu byte(s)\n", sizeof(long long int));
	printf("size of a float: %lu byte(s)\n", sizeof(float));
	return (0);
}
