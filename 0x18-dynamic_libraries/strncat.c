#include "main.h"

/**
 * _strncat - Concatenates n characters from src to dest
 * @dest: Destination string
 * @src: Source string
 * @n: Number of characters to concatenate
 *
 * Return: Pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*dest)
		dest++;

	while (*src && n--)
	{
		*dest++ = *src++;
	}

	*dest = '\0';

	return (ptr);
}
