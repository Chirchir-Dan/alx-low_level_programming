#include "main.h"

/*
 * factorial - Calculates the factorial of a number.
 * @n: The number for which to calculate the factorial.
 *
 * Return: The factorial of n, or -1 if n is less than 0 (error).
 */
int factorial(int n)
{
	if (n < 0)
	{
		/* Return -1 to indicate an error for negative input. */
		return (-1);
	}
	else if (n == 0)
	{
		/* Factorial of 0 is 1. */
		return (1);
	}
	else
	{
		/* Calculate the factorial using recursion. */
		return (n * factorial(n - 1));
	}
}

