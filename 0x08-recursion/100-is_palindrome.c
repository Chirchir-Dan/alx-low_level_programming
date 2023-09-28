#include "main.h"

/**
 * _strlen - Computes the length of a string.
 * @s: The input string.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}

/**
 * _check_palindrome - Helper function to check if a string is a palindrome.
 * @s: The string to check.
 * @start: The start index of the string.
 * @end: The end index of the string.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int _check_palindrome(char *s, int start, int end)
{
	if (start >= end)
		return (1);

	if (s[start] != s[end])
		return (0);

	return (_check_palindrome(s, start + 1, end - 1));
}

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
	int length = _strlen(s);

	if (length <= 1)
		return (1);

	return (_check_palindrome(s, 0, length - 1));
}

