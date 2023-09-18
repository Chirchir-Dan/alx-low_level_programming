#include "main.h"

/**
 * puts2 - Prints alternate characters from a string, starting with the first one.
 * @str: Pointer to the input string.
 *
 * Return: None.
 */
void puts2(char *str)
{
	int length = 0;
	int index;

	/* Calculate the length of the string */
	while (str[length] != '\0')
	{
		length++;
	}

	/* Print every alternate character from the string */
	for (index = 0; index < length; index += 2)
	{
		_putchar(str[index]);
	}

	_putchar('\n');
}

