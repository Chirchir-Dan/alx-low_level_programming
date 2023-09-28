#include "main.h"

/**
 * wildcmp - Compares two strings with wildcard character '*'.
 * @s1: The first string to compare.
 * @s2: The second string to compare (may contain '*').
 *
 * Description:
 *   This function compares two strings, where '*' in s2 can match any
 *   sequence of characters (including an empty string).
 *
 * Return:
 *   - 1 if the strings can be considered identical.
 *   - 0 otherwise.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1); /* Both strings are empty, considered identical. */

	if (*s2 == '*')
	{
		/* Handle '*' as matching any sequence (including an empty string). */
		if (wildcmp(s1, s2 + 1) || (*s1 != '\0' && wildcmp(s1 + 1, s2)))
			return (1);
	}

	if (*s1 != '\0' && (*s1 == *s2))
		return wildcmp(s1 + 1, s2 + 1);

	return (0); /* Strings are not identical. */
}

