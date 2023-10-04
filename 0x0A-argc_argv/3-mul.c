#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 *
 * Description:
 *	This program multiplies two numbers and prints the result.
 *
 * Return:
 *   - 0 if the multiplication is successful.
 *   - 1 if the program does not receive two arguments or if there's an error.
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1); /* Return 1 for error */
	}

	num1 = atoi(argv[1]); /* Convert the first argument to an integer */
	num2 = atoi(argv[2]); /* Convert the second argument to an integer */

	result = num1 * num2; /* Perform the multiplication using * operator */

	printf("%d\n", result); /* Print the result followed by a new line */

	return (0); /* Return 0 for success */
}

