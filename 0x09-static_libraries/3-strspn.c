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
	int i; 

	while (*s)
	{	
		/* Reset the found flag for each character in s */
		found = 0; 
		
		/* Use the variable declared outside of the loop */
		for (i = 0; accept[i]; i++) 
		{
			if (*s == accept[i])
			{
				found = 1;
				break;
			}
		}

		if (!found)
		{
			/* Exit the loop when a character not in accept is found */
			break;
		}

		count++;
		s++;
	}

	return count;
}

