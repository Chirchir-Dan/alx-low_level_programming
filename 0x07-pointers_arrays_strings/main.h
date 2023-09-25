#ifndef MAIN_H
#define MAIN_H


/**
 * _putchar - Writes a character to stdout.
 * @c: The character to write.
 *
 * Return: On success, the character written. On error, -1.
 */
int _putchar(char c);

/**
 * _memset - Fills the first n bytes of the memory area pointed to by s with the constant byte b.
 * @s: Pointer to the memory area to be filled.
 * @b: The byte to fill the memory with.
 * @n: The number of bytes to be filled.
 *
 * Return: A pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n);

/**
 * _memcpy - Copies n bytes from memory area src to memory area dest.
 * @dest: Pointer to the destination memory area.
 * @src: Pointer to the source memory area.
 * @n: The number of bytes to copy.
 *
 * Return: A pointer to the destination memory area dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n);

/**
 * _strchr - Locates the first occurrence of the character c in the string s.
 * @s: Pointer to the string to search.
 * @c: The character to locate.
 *
 * Return: A pointer to the first occurrence of c in s, or NULL if c is not found.
 */
char *_strchr(char *s, char c);

/**
 * _strspn - Gets the length of a prefix substring that consists of only the characters found in accept.
 * @s: Pointer to the string to be searched.
 * @accept: Pointer to the string containing the characters to match.
 *
 * Return: The number of bytes in the initial segment of s that match any character in accept.
 */
unsigned int _strspn(char *s, char *accept);

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: Pointer to the string to be searched.
 * @accept: Pointer to the string containing the characters to search for.
 *
 * Return: A pointer to the first occurrence in s of any character from accept, or NULL if no such character is found.
 */
char *_strpbrk(char *s, char *accept);

/**
 * _strstr - Locates a substring within a string.
 * @haystack: Pointer to the string to search in.
 * @needle: Pointer to the substring to search for.
 *
 * Return: A pointer to the beginning of the located substring, or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle);

/**
 * print_chessboard - Prints a chessboard.
 * @a: Pointer to an array representing the chessboard.
 */
void print_chessboard(char (*a)[8]);

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix of integers.
 * @a: Pointer to the square matrix.
 * @size: The size of the matrix.
 */
void print_diagsums(int *a, int size);

/**
 * set_string - Sets the value of a pointer to a char.
 * @s: Pointer to a pointer to a char.
 * @to: Pointer to a char that will be the new value of *s.
 *
 * Description: This function takes a pointer to a pointer to a char, 's', and a
 * pointer to a char, 'to', and sets the value of 's' to the address pointed to
 * by 'to', effectively changing the value it points to.
 */
void set_string(char **s, char *to);

#endif /* MAIN_H */

