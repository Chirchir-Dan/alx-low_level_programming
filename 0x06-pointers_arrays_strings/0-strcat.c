#include <stdio.h>

/**
 * _strcat - Concatenates two strings.
 * @dest: Pointer to the destination string.
 * @src: Pointer to the source string.
 *
 * Return: Pointer to the resulting string (dest).
 */
char *_strcat(char *dest, const char *src)
{
	/* Initialize a pointer to keep track of the end of dest */
	char *dest_end = dest;

	/* Find the end of the destination string */
	while (*dest_end != '\0')
	{
		dest_end++;
	}

	/* Append the source string to the destination */
	while (*src != '\0')
	{
		*dest_end = *src;
		dest_end++;
		src++;
	}

	/* Add a null terminator to the end of the concatenated string */
	*dest_end = '\0';

	/* Return a pointer to the modified destination string */
	return dest;
}

int main(void)
{
	/* Declare and initialize the destination string */
	char dest[50] = "Hello, ";

	/* Declare and initialize the source string */
	char src[] = "world!";

	/* Concatenate the source string to the destination string */
	_strcat(dest, src);

	/* Print the concatenated string */
	printf("Concatenated string: %s\n", dest);

	/* Return 0 to indicate successful execution */
	return (0);
}

