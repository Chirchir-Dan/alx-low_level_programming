#include <stdio.h>

/**
 * main - Entry point, prints FizzBuzz sequence
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	for (int i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			/* If i is divisible by both 3 and 5, print "FizzBuzz" */
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			/* If i is divisible by 3, print "Fizz" */
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			/* If i is divisible by 5, print "Buzz" */
			printf("Buzz");
		}
		else
		{
			/* If i is not divisible by 3 or 5, print the number itself */
			printf("%d", i);
		}

		if (i < 100)
		{
			/* Print a space after the value unless it's the last one */
			printf(" ");
		}
		else
		{
			/* Print a newline character to start a new line */
			printf("\n");
		}
	}

	return (0);
}

