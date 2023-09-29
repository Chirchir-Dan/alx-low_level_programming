#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - Find first occurrence in s of any byte from accept.
 * @s: Pointer to the string to be searched.
 * @accept: Pointer to the string containing accepted bytes.
 *
 * Return: Pointer to the matching byte in s, or NULL if not found.
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		char *a = accept;
		while (*a)
		{
			if (*s == *a)
				return s;
			a++;
		}
		s++;
	}

	return NULL; /* No matching byte found */
}

