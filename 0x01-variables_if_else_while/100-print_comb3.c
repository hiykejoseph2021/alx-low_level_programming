#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: print two digits combination
 * Return: Always 0 (suceess)
 */

int main(void)
{
	int c, i;

	for (c = 'o'; c <= '9'; c++)
	{
		for (i ='o'; i <= '9'; i++)
		{
			if (c < i)
			{
				putchar(c);
				putchar(i);

				if (c != '8' || (c == '8' && i != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
