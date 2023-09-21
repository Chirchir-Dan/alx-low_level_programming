#include "main.h"

/**
 * _strncat - Concatenates two strings with a maximum of n bytes from src.
 * @dest: The destination string.
 * @src: The source string to be appended to dest.
 * @n: The maximum number of bytes to append from src.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *dest_ptr = dest;

	/* Find the end of the dest string */
	while (*dest_ptr != '\0') {
		dest_ptr++;
	}

	/* Append characters from src to dest, up to n bytes or until src ends */
	while (*src != '\0' && n > 0) {
		*dest_ptr = *src;
		dest_ptr++;
		src++;
		n--;
	}

	/* Add a terminating null byte to the concatenated string */
	*dest_ptr = '\0';

	return dest;
}

