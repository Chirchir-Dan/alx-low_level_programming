/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string to calculate the length of.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	/* Base case: when we reach the null terminator, the length is 0 */
	if (*s == '\0')
		return (0);

	/* Recursively call _strlen_recursion with the next character */
	return (1) + _strlen_recursion(s + 1);
}

