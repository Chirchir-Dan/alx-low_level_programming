/**
 * is_prime_recursive - Helper function to check if a number is prime.
 * @n: The number to check for primality.
 * @divisor: The current divisor to check.
 *
 * Description:
 *   This function recursively checks whether the given integer 'n' is a prime
 *   number.
 *
 *   A prime number is a positive integer greater than 1 that has no positive
 *   divisors other than 1 and itself.
 *
 * Return:
 *   - 1 if 'n' is a prime number.
 *   - 0 if 'n' is not a prime number (including the cases where 'n' is less
 *     than or equal to 1).
 */
int is_prime_recursive(int n, int divisor)
{
	if (n <= 1)
	{
		return (0);
	}
	if (divisor == 1)
	{
		return (1);
	}
	if (n % divisor == 0)
	{
		return (0);
	}
	return (is_prime_recursive(n, divisor - 1));
}

/**
 * is_prime_number - Checks if an integer is prime.
 * @n: The integer to check for primality.
 *
 * Description:
 *   This function determines whether the given integer 'n' is a prime number
 *   using recursion. A prime number is a positive integer greater than 1 that
 *   has no positive divisors other than 1 and itself.
 *
 * Return:
 *   - 1 if 'n' is a prime number.
 *   - 0 if 'n' is not a prime number (including the cases where 'n' is less
 *     than or equal to 1).
 */
int is_prime_number(int n)
{
	return (is_prime_recursive(n, n / 2));
}

