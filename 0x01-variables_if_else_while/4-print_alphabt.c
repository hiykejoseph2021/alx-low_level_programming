#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 *Description: prints lowercase alphabets
 * Return: Always 0 (success)
 */

int main(void)
{
	int ch;

	while (a <= 'z)
	{
		if ((a != 'q' && a != 'a') && a <= 'z')
		{
			putchar(ch);
		}
		else
		{
			ch++;
		}
	}
	putchar('\n');
	return (0);
}
