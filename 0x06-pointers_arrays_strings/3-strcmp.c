#include "main.h"
/**
 * _strcmp - Compare the values of two strings
 * @s1: The first string for comparison
 * @s2: The second string for comparison
 *
 * Return: The difference between the ASCII values of the first differing characters
 */

int _strcmp(char *s1, char *s2)
{
	int index;

	index = 0;
	while (s1[index] != '\0' && s2[index] != '\0')
	{
		if (s1[index] != s2[index])
		{
			return (s1[index] - s2[index]);
		}
		index++;
	}
	return (0);
}

