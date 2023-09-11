#include <stdio.h>

/**
 * main - Prints the alphabet in lower case.
 *
 * Return: always 0
 */

int main(void)
{
	char abt[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(abt[i]);
	}
	putchar('\n');
	return (0);
}

