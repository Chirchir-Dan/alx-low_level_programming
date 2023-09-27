#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - Prints a string, followed by a new line.
 * @s: The string to print.
 */
void _puts_recursion(char *s)
{
    if (*s == '\0') /* End of string, print newline */
    {
        putchar('\n');
        return;
    }

    putchar(*s); /* Print current character */
    _puts_recursion(s + 1); /* Recursive call with next character */
}

