#include "main.h"

/**
 * _atoi - Converts a string to an integer
 * @s: The string to be converted
 *
 * Return: The integer value of the converted string
 */
int _atoi(char *s)
{
	int result = 0;	/* Initialize the result */
	int sign = 1;	/* Initialize sign as positive */
	int i = 0;

	/* Handle leading '+' or '-' */
	if (s[0] == '-')
	{
		sign = -1;	/* If the string starts with '-', set sign to negative */
		i++;		/* Move to the next character */
	}
	else if (s[0] == '+')
	{
		i++;		/* If the string starts with '+', move to the next character */
	}

	/* Iterate through the string */
	while (s[i] != '\0')
	{
		/* Check if the current character is a digit */
		if (s[i] >= '0' && s[i] <= '9')
		{
			/* Update the result by multiplying it by 10 and adding the digit */
			result = (result * 10) + (s[i] - '0');
		}
		else
		{
			/* If a non-digit character is encountered, stop parsing */
			break;
		}

		i++; /* Move to the next character */
	}

	/* Return the final result with the sign applied */
	return (result * sign);
}

