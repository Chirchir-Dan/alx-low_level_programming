#include "main.h"

/**
 * puts2 - Print every second character, starting from the first.
 * @str: Pointer to the input string.
 *
 * Return: None.
 */
void puts2(char *str)
{
    int length = 0;
    int temp = 0;
    char *current = str;
    int index;

    /* Calculate the length of the string */
    while (*current != '\0')
    {
        current++;
        length++;
    }

    temp = length - 1;

    for (index = 0; index <= temp; index++)
    {
        if (index % 2 == 0)
        {
            _putchar(str[index]);
        }
    }

    _putchar('\n');
}

