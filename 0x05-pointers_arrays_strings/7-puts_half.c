#include <stdio.h>

/**
 * puts_half - Prints the second half of a string, followed by a new line.
 * @str: Pointer to the input string.
 *
 * Return: None.
 */
void puts_half(char *str)
{
	int length = 0;
	int start;

	/* Calculate the length of the string */
	while (str[length] != '\0')
	{
		length++;
	}

	/* Calculate the starting index for the second half */
	start = (length - 1) / 2 + 1;

	/* Print the second half of the string */
	while (str[start] != '\0')
	{
		putchar(str[start]);
		start++;
	}

	putchar('\n'); /* Print a new line */
}

