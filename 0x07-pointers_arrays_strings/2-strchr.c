#include "main.h"
#include <stddef.h>
/**
 * _strchr - Locates the first occurrence of the character c in the string s.
 * @s: Pointer to the string to search.
 * @c: The character to locate.
 *
 * Return: A pointer to the first occurrence of c in s, or NULL if c is not found.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return s; /* Character found */
		}
		s++; /* Move to the next character in the string */
	}

	if (c == '\0')
	{
		/* Special case: '\0' is treated as the end of the string */
		return s;
	}

	return NULL; /* Character not found */
}

