#include "main.h"
/**
 * _strcat - Concatenates two strings
 * @dest: The destination string to append to
 * @src: The source string to append to the destination
 *
 * Return: A pointer to the destination string `dest`
 */
char *_strcat(char *dest, char *src)
{
	int dest_index;
	int src_index;

	/* Find the null-terminated end of the destination string */
	dest_index = 0;
	while (dest[dest_index] != '\0')
	{
		dest_index++;
	}

	/* Copy characters from src to the end of dest */
	src_index = 0;
	while (src[src_index] != '\0')
	{
		dest[dest_index] = src[src_index];
		dest_index++;
		src_index++;
	}

	dest[dest_index] = '\0';
	return (dest);
}

