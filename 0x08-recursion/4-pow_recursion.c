#include "main.h"

/*
 * _pow_recursion - Calculates x raised to the power of y.
 * @x: The base.
 * @y: The exponent.
 *
 * This function calculates the result of x raised to the power of y.
 * If y is negative, the function returns -1 to indicate an error.
 *
 * Return: The result of x^y, or -1 if y is less than 0 (error).
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		/* Return -1 to indicate an error for negative y. */
		return (-1);
	}
	else if (y == 0)
	{
		/* Any number raised to the power of 0 is 1. */
		return (1);
	}
	else
	{
		/* Calculate x^y using recursion. */
		return (x * _pow_recursion(x, y - 1));
	}
}

