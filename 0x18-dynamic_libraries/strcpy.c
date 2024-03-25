#include "main.h"

/**
 * _strcpy - Copies a string
 * @dest: Destination buffer
 * @src: Source string
 *
 * Return: Pointer to destination buffer
 */
char *_strcpy(char *dest, char *src)
{
	char *ptr = dest;

	while (*src)
	{
		*dest++ = *src++;
	}
	*dest = '\0';

	return (ptr);
}
