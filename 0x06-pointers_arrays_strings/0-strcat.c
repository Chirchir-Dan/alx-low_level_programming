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

	/* Copy characters from src to dest until the end of src is reached */
	while (*src)
	{
		*dest_ptr = *src;/* Copy the character from src to dest */
		dest_ptr++;/* Move the destination pointer forward */
		src++;/* Move the source pointer forward */
    }
	}
	/* Add a terminating null byte to the concatenated string */
	*dest_ptr = '\0';

	/* Return a pointer to the resulting string dest */	
	return dest;
}

