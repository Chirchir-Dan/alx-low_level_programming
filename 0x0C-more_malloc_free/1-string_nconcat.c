#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Concatenates two strings up to n bytes.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes from s2 to concatenate.
 *
 * Return: A pointer to the newly allocated concatenated string.
 *         If the function fails or if n is greater or equal to the
 *         length of s2, it returns NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concatenated;
	unsigned int len1, len2, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n >= len2)
		n = len2;

	concatenated = malloc(len1 + n + 1); /* +1 for the null-terminator */

	if (concatenated == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
	{
		concatenated[i] = s1[i];
	}

	for (i = 0; i < n; i++)
	{
		concatenated[len1 + i] = s2[i];
	}

	concatenated[len1 + n] = '\0'; /* Null-terminate the concatenated string */

	return (concatenated);
}

