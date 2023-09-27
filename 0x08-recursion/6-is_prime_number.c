/**
 * is_prime_number - Checks if an integer is prime.
 *
 * @n: The integer to check for primality.
 *
 * Description:
 *	 This function determines whether the given integer 'n' is a prime number.
 *	 A prime number is a positive integer greater than 1 that has no positive
 *	 divisors other than 1 and itself.
 *
 * Return:
 *	 - 1 if 'n' is a prime number.
 *	 - 0 if 'n' is not a prime number (including the cases where 'n' is less
 *	   than or equal to 1).
 */
int is_prime_number(int n)
{
    int i;

    if (n <= 1)
    {
        return (0);
    }

    for (i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return (0);
        }
    }

    return (1);
}

