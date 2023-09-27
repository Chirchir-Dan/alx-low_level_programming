#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - Prints a string in reverse.
 * @s: The string to print in reverse.
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1); /* Recursive call with next character */
		putchar(*s); /* Print the current character */
	}
}

