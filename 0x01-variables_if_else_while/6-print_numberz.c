#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0.
 * using putchar and without using variable char
 *
 * Return: always 0.
 */

int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}

