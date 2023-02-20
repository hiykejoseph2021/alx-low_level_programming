#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 *Description: prints lowercase alphabets
 * Return: Always 0 (success)
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
