#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 * Return: Always 0.
 */

int main(void)
{
	int a, b, i;

	for (a = 48; a < 58; a++)
	{
		for (b = 49; b < 58; b++)
		{
			for (i = 50; i < 58; i++)
			{
				if (i > m && b > a)
				{
					putchar(a);
					putchar(b);
					putchar(i);
					if (a != 55 || b != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
