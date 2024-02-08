#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - Convert a binary string to an unsigned integer.
 * @b: A pointer to the binary string (0 and 1 characters).
 *
 * Return: The converted number, or 0 if there are characters
 * that are not '0' or '1' in the string @b or if @b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i = 0;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] == '0')
		{
			/* Shift the current result left by 1 and add 0. */
			result = (result << 1);
		}
		else if (b[i] == '1')
		{
			/* Shift the current result left by 1 and add 1. */
			result = (result << 1) | 1;
		}
		else
		{
			/* If a character is not '0' or '1, return 0 as specified. */
			return (0);
		}
		i++;
	}

	return (result);
}
