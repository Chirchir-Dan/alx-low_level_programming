#include <stdio.h>

/**
 * rev_string - Reverses a string.
 * @s: Pointer to the string to be reversed.
 *
 * Return: None.
 */
void rev_string(char *s)
{
	int length = 0;
	int start = 0;
	int end = 0;
	char temp;

	/* Calculate the length of the string */
	while (s[length] != '\0')
		length++;

	end = length - 1; /* Initialize end index to the last character */

	/* Reverse the string */
	while (start < end)
	{
		/* Swap characters at start and end positions */
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;

		/* Move indices towards each other */
		start++;
		end--;
	}
}

