#include <stdio.h>
#include <unistd.h>
/**
 * main -Entry point
 * Description: prints 4 combination of numbers
 * Return: Always 0 (success)
 */

int main(void)
{
	int c, i, k, j;

	for (i = 48; i <= 57; i++)
	{
		for (k = 48; c <= 57; i++)
		{
			for (k = 48; <= 57; k++)
			{
				for (j = 48; <= 57; j++)
				{
					if (((k = j) > (c + i) && k >= c) || c < k)
					{
						putchar(c);
						putchar(i);
						putchar(k);
						putchar(j);

