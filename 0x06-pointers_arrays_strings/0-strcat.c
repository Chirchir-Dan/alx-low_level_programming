#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string to be appended to dest.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	char *dest_ptr = dest;

	/* Find the end of the dest string */
	while (*dest_ptr)
		dest_ptr++;

	/* Append the src string to dest */
	while (*src)
	{
		*dest_ptr = *src;
		dest_ptr++;
		src++;
	}

	/* Add a terminating null byte */
	*dest_ptr = '\0';

	return dest;
}

