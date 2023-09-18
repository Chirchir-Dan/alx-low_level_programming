/**
 * _strlen - Calculate the length of a string.
 * @s: Pointer to the string.
 *
 * Return: The length of the string (excluding the null character).
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s)
	{
		length++;
		s++;
	}

	return (length);
}

