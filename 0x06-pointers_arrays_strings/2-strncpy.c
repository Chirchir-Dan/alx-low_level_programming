#include "main.h"
/**
 * _strncpy - Copy a string with a specified length
 * @dest: The destination where the string will be copied
 * @src: The source string to be copied
 * @n: The maximum number of characters to copy from src
 *
 * Return: A pointer to the destination string `dest`
 */
char *_strncpy(char *dest, char *src, int n)
{
	int index;

	index = 0;
	while (index < n && src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	while (index < n)
	{
		dest[index] = '\0';
		index++;
	}

	return (dest);
}

