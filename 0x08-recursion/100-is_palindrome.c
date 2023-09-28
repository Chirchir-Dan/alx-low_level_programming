#include "main.h"

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to check.
 *
 * Description:
 *   This function determines whether the given string 's' is a palindrome.
 *   A palindrome is a sequence that reads the same forwards and backwards.
 *
 * Return:
 *   - 1 if the string is a palindrome.
 *   - 0 if the string is not a palindrome.
 */
int is_palindrome(char *s)
{
	int length = 0;
	int i, j;

	/* Calculate the length of the string. */
	while (s[length] != '\0')
	{
		length++;
	}

	/* Compare characters from both ends of the string. */
	i = 0;
	j = length - 1;
	while (i < j)
	{
		if (s[i] != s[j])
		{
			return (0); /* Not a palindrome. */
		}
		i++;
		j--;
	}

	return (1); /* It's a palindrome. */
}

