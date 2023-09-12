#include "main.h"

/**
 * print_alphabet - Print lowercase letters of the alphabet
 *
 * Description: This function prints the lowercase alphabet from 'a' to 'z'.
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}

	_putchar('\n');
}

