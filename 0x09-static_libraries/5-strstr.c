#include "main.h"
#include <stddef.h>

/**
 * _strstr - Locates the first occurrence of a substring in a string.
 * @haystack: The string to search within.
 * @needle: The substring to search for.
 *
 * Return: Pointer to the beginning of the located substring, or NULL
 * if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}

		if (*p == '\0')
			return haystack;
	}

	return NULL; /* Substring not found */
}

