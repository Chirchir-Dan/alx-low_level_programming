/**
 * _strlen - Returns the length of a string.
 * @s: Pointer to the string.
 *
 * This function calculates and returns the length of the null-terminated string
 * pointed to by `s`, excluding the null character ('\0').
 *
 * Return: The length of the string.
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

