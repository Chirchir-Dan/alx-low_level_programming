#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Returns a pointer to a newly allocated space in memory
 *           containing a copy of the input string.
 * @str: The input string to duplicate.
 *
 * Description: This function duplicates a given string using malloc.
 *              The caller is responsible for freeing the allocated memory.
 *
 * Return: A pointer to the duplicated string, or NULL on failure.
 */
char *_strdup(char *str)
{
	char *duplicate;
	int length = 0;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}

	/* Calculate the length of the input string */
	while (str[length] != '\0')
	{
		length++;
	}

	/* Allocate memory for the duplicated string */
	duplicate = (char *)malloc((length + 1) * sizeof(char));

	if (duplicate == NULL)
	{
		return (NULL);
	}

	/* Copy the input string into the duplicated string */
	for (i = 0; i <= length; i++)
	{
		duplicate[i] = str[i];
	}

	return (duplicate);
}

