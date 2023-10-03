#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Description:
 * This function concatenates two strings and returns a pointer to the
 * concatenated string. The caller is responsible for freeing the allocated
 * memory.
 *
 * Return: A pointer to the concatenated string, or NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	char *concatenated;
	int length1 = 0;
	int length2 = 0;
	int i, j;

	/* Handle NULL strings as empty strings */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* Calculate the lengths of s1 and s2 */
	while (s1[length1] != '\0')
		length1++;
	while (s2[length2] != '\0')
		length2++;

	/* Allocate memory for the concatenated string */
	concatenated = (char *)malloc((length1 + length2 + 1) * sizeof(char));

	if (concatenated == NULL)
	{
		return (NULL); /* Return NULL on memory allocation failure */
	}

	/* Copy s1 into concatenated */
	for (i = 0; i < length1; i++)
	{
		concatenated[i] = s1[i];
	}

	/* Copy s2 into concatenated */
	for (j = 0; j < length2; j++)
	{
		concatenated[i + j] = s2[j];
	}

	concatenated[i + j] = '\0'; /* Null-terminate the concatenated string */

	return (concatenated);
}

