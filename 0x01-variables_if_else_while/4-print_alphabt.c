#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 *Description: prints lowercase alphabets
 * Return: Always 0 (success)
 */

int main(void)
{
	char c;

	c = 'a';
	while (a <= 'z')
	{
		if ((a != 'q' && a != 'a') && a <= 'z')
		{
			putchar(c);
		}
		else
		{
			c++;
		}
	}
	putchar('\n');
	return (0);
}
