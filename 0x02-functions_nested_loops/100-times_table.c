100-times_table.c#include "main.h"

/**
 * print_single_digit - Print a single digit.
 * @num: The digit to print.
 */

void print_single_digit(int num);

/**
 * print_double_digit - Print a double-digit number.
 * @num: The double-digit number to print.
 */

void print_double_digit(int num);

/**
 * print_times_table - Print the times table for n, starting from 0.
 * @n: The desired times table (0-15).
 */

void print_times_table(int n)
{
	if (n < 0 || n > 15)
		return; /* Invalid input, do nothing */

	for (int row = 0; row <= n; row++)
	{
		for (int column = 0; column <= n; column++)
		{
			if (column > 0)
			{
				_putchar(',');
				_putchar(' ');
			}

			int product = column * row;

			if (product < 10)
			{
				_putchar(' ');
				_putchar(' ');
				print_single_digit(product);
			}

			else
			{
				print_double_digit(product);
			}

		}

		_putchar('\n');
	}
}

/**
 * print_single_digit - Print a single digit.
 * @num: The digit to print.
 */

void print_single_digit(int num)
{
	_putchar(num + '0');
}

/**
 * print_double_digit - Print a double-digit number.
 * @num: The double-digit number to print.
 */

void print_double_digit(int num)
{
	_putchar((num / 10) + '0');
	_putchar((num % 10) + '0');
}

