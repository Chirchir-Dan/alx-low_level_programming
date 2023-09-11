#include <stdio.h>

/**
 * main - Prints the alphabet in lower case and then in upper case.
 *
 * Return: always 0
 */
int main(void)
{
char abt[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 52; i++)
	{
		putchar(abt[i]);
	}
	putchar('\n');
	return (0);
}

