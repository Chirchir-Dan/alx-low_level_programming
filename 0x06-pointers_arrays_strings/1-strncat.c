#include "main.h"

/**
 * _strncat - Concatenates two strings using at most n bytes from src.
 * @dest: The destination string.
 * @src: The source string to be appended to dest.
 * @n: The maximum number of bytes to append from src.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
    char *dest_ptr = dest;
    int dest_len = 0;
    int i = 0; 

    /* Find the end of the dest string */
    while (*dest_ptr != '\0')
    {
        dest_ptr++;
        dest_len++;
    }

    /* Append characters from src to dest, up to n bytes or until src ends */
    while (i < n && src[i] != '\0')
    {
        dest[dest_len] = src[i];
        dest_len++;
        i++;
    }

    /* Ensure the concatenated string is null-terminated */
    dest[dest_len] = '\0';

    return dest;
}

