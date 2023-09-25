#include "main.h"
#include <stddef.h>

/**
 * _strspn - Gets the length of a prefix substring consisting only of bytes
 *           from the accept string.
 * @s: Pointer to the string to be searched.
 * @accept: Pointer to the string containing bytes to be accepted.
 *
 * Return: The number of bytes in the initial segment of s which consist only
 *         of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int found;
	int i; /* Variable declaration moved outside of the for loop */

	while (*s)
	{
		found = 0; /* Reset the found flag for each character in s */

		for (i = 0; accept[i]; i++) /* Use the variable declared outside of the loop */
		{
			if (*s == accept[i])
			{
				found = 1;
				break;
			}
		}

		if (!found)
		{
			break; /* Exit the loop when a character not in accept is found */
		}

		count++;
		s++;
	}

	return count;
}

