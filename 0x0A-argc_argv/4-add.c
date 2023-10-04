#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 *
 * Description:
 *   This program adds positive numbers and prints the result.
 *
 * Return:
 *   - 0 if addition is successful or no numbers are provided.
 *   - 1 if there's an error (e.g., non-digit input).
 */
int main(int argc, char *argv[])
{
	int sum = 0; /* Initialize sum to zero */
	int i, j, num; /* Declare variables at the beginning of the block */
	char *numStr;

	if (argc == 1)
	{
		printf("0\n");
		return (0); /* No numbers provided, return 0 */
	}

	for (i = 1; i < argc; i++)
	{
		numStr = argv[i]; /* Get the current argument as a string */

		for (j = 0; numStr[j] != '\0'; j++)
		{
			if (numStr[j] < '0' || numStr[j] > '9')
			{
				printf("Error\n");
				return (1); /* Non-digit input, return 1 */
			}
		}

		num = atoi(numStr); /* Convert the string to an integer */
		if (num <= 0)
		{
			continue; /* Skip non-positive numbers */
		}

		sum += num; /* Add positive numbers to the sum */
	}

	printf("%d\n", sum); /* Print the sum followed by a new line */

	return (0); /* Return 0 for success */
}

