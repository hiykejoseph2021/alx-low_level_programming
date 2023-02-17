#include <stdio.h>

/**
 * main -prints the size of various type based on
 * the computer it is compiled and run on..
 * Return: Aalways 0.
 */

int main(void)
{
	printf("size of a char: %zu byte(s)\n", sizeof(char));
	
	print("size of an int: %zu byte(s)n", sizeof(int));
	printf("size of a long int: %zu byte(s)n", sizeof(long int));
	printf("size of a long long int: %zu byte(s)n", sizeof(long long int));
	printf("size of a float %zu byte(s)n", sizeof(float));
	return (0);
}
