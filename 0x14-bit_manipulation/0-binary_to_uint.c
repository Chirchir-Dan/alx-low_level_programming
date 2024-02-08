#include <stddef.h>
#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: A pointer to a string of 0 and 1 characters
 *
 * Return: the converted number, or 0 if:
 *	- b is NULL
 *	- atleast one character is not 0 or 1.
 */

unsigned int binary_to_uint (const char *b)
{
	unsigned int result = 0;
	int i = 0;

	if (b == NULL)
		return (0);
	/**
	 * Iterate through each character of the string
	 * untill the null terminator is reached
	 */
	while (b[i] != '\0')
	{
		if (b[i] == '0')
		{
			result = (result << 1);
		}
		else if (b[i] == '1')
		{
			result = (result << 1) | 1;
		}
		else
		{
			/*If char is not 0 or 1*/
			return (0);
		}
	}
	return (result);

}
