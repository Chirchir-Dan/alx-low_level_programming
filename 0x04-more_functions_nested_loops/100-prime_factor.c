#include <stdio.h>

/**
 * main - Entry point, finds and prints the largest prime factor
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int number = 612852475143;
	long int factor = 2;
	long int largest_prime_factor = 0;

	while (number > 1)
	{
		if (number % factor == 0)
		{
			largest_prime_factor = factor;
			while (number % factor == 0)
			{
				number = number / factor;
			}
		}
		factor++;
	}

	printf("%ld\n", largest_prime_factor);

	return (0);
}

