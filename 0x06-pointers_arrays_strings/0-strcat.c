#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: The destination string to which the source string will be appended
 * @src: The source string that will be appended to the destination
 *
 * Return: A pointer to the destination string `dest`
 */
char *_strcat(char *dest, char *src)
{
    int dest_index;  /* Index for the destination string */
    int src_index;   /* Index for the source string */

    /* Find the null-terminated end of the destination string */
    dest_index = 0;
    while (dest[dest_index] != '\0')
    {
        dest_index++;
    }

    /* Copy characters from src to the end of dest */
    src_index = 0;
    while (src[src_index] != '\0')
    {
        dest[dest_index] = src[src_index];
        dest_index++;
        src_index++;
    }

    /* Add a null terminator to the end of the concatenated string */
    dest[dest_index] = '\0';

    /* Return a pointer to the concatenated string (dest) */
    return (dest);
}

