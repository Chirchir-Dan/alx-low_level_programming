#include "main.h"

int find_sqrt_recursive(int n, int i);

/**
 * _sqrt_recursion - Calculates the natural square root of a number.
 * @n: The number for which to find the square root.
 *
 * Return: The resulting square root or -1 if n doesn't have a natural
 * square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (find_sqrt_recursive(n, 0));
}

/**
 * find_sqrt_recursive - Recursively finds the natural square root of a number.
 * @n: The number for which to find the square root.
 * @i: Iterator.
 *
 * Return: The resulting square root or -1 if n doesn't have a natural
 * square root.
 */
int find_sqrt_recursive(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (find_sqrt_recursive(n, i + 1));
}

