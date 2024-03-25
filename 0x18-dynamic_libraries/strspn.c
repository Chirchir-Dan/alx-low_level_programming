#include "main.h"

/**
 * _strspn - Calculates the length of the initial segment of s
 *            which consists only of characters from accept
 * @s: Pointer to the string to be scanned
 * @accept: Pointer to the string containing the characters to match
 *
 * Return: The number of characters in the initial segment of s
 *         which consist only of characters from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int found = 0;

	while (*s && !found)
	{
		char *ptr = accept;

		while (*ptr)
		{
			if (*s == *ptr)
			{
				count++;
				found = 1;
				break;
			}
			ptr++;
		}
		if (!found)
			break;
		s++;
	}
	return (count);
}
