#include "main.h"

/**
 * _strncpy - Copies n characters from src to dest
 * @dest: Destination buffer
 * @src: Source string
 * @n: Number of characters to copy
 *
 * Return: Pointer to the destination buffer
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*src && n--)
	{
		*dest++ = *src++;
	}

	while (n--)
		*dest++ = '\0';

	return (ptr);
}
