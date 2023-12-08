#include <stdio.h>

/**
 * is_palindrome - Checks if a number is a palindrome.
 * @number: The number to be checked.
 *
 * Return: 1 if the number is a palindrome, 0 otherwise.
 */
int is_palindrome(int number)
{
	int original = number;
	int reversed = 0;

	while (number > 0)
	{
		reversed = reversed * 10 + number % 10;
		number /= 10;
	}

	return (original == reversed);
}

/**
 * main - Entry point of the program.
 *
 * Return: Always 0.
 */
int main(void)
{
	int result = 0;

	for (int i = 100; i < 1000; i++)
	{
		for (int j = 100; j < 1000; j++)
		{
			int product = i * j;

			if (is_palindrome(product) && product > result)
			{
				result = product;
			}
		}
	}

	/* Save the result to the file*/
	FILE *file = fopen("102-result", "w");

	if (file != NULL)
	{
		fprintf(file, "%d", result);
		fclose(file);
	}

	return (0);
}
