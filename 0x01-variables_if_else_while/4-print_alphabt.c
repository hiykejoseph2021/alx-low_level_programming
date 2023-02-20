#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 *Description: prints lowercase alphabets
 * Return: Always 0 (success)
 */

int main(void)
{
	char low;

	for (low = 'a'; 'z'; low++)
	{
		putchar(low);
	}
	
	{
		for (low = 'A'; low <= 'Z'; low++);
		putchar(low);
	}

	putchar('\n');
	return (0);
}
