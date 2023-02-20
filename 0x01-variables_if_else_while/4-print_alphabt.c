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

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if ((ch != 'q' && ch != 'a') && a <= 'z')
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
