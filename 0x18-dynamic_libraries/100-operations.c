#include <stdio.h>

/**
 * add - Adds two integers
 * @a: The first integer
 * @b: The second integer
 *
 * Return: The sum of the two integers
 */
int add(int a, int b)
{
    return (a + b);
}

/**
 * sub - Subtracts two integers
 * @a: The first integer
 * @b: The second integer
 *
 * Return: The difference of the two integers
 */
int sub(int a, int b)
{
    return (a - b);
}

/**
 * mul - Multiplies two integers
 * @a: The first integer
 * @b: The second integer
 *
 * Return: The product of the two integers
 */
int mul(int a, int b)
{
    return (a * b);
}

/**
 * div - Divides two integers (integer division)
 * @a: The numerator
 * @b: The denominator
 *
 * Return: The result of integer division
 */
int div(int a, int b)
{
    if (b == 0)
    {
        printf("Error: Division by zero\n");
        return (0);  /* Return 0 on division by zero */
    }
    return (a / b);
}

/**
 * mod - Computes the remainder of division
 * @a: The dividend
 * @b: The divisor
 *
 * Return: The remainder of division
 */
int mod(int a, int b)
{
    if (b == 0)
    {
        printf("Error: Division by zero\n");
        return (0);  /* Return 0 on division by zero */
    }
    return (a % b);
}

