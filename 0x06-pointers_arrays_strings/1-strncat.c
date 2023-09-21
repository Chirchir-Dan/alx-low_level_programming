#include "main.h"
/**
 * _strncat - concatenate two strings using at most
 * n bytes from src
 * @dest: The destination string to which the
 * source string will be appended
 * @src: The source string that will be appended to the destination
 * @n: The maximum number of bytes to append from src
 *
 * Return: A pointer to the destination string `dest`
 */


char *_strncat(char *dest, char *src, int n)
{
	/* Index for the destination string */
	int dest_index;

	/* Index for the source string */
	int src_index;
	
	/* Find the null-terminated end of the destination string */
	dest_index = 0;
	while (dest[dest_index] != '\0')
	{
		dest_index++;
	}

	 /* Copy up to n characters from src to the end of dest */
	src_index = 0;
	while (src_index < n && src[src_index] != '\0')
	{
	dest[dest_index] = src[src_index];
	dest_index++;
	src_index++;
	}

	/* Add a null terminator to the end of the concatenated string */
	dest[dest_index] = '\0';
	return (dest);
}

