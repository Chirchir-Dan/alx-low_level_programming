#include "main.h"

/**
 * print_times_table - Print the times table for n, starting from 0.
 * @n: The desired times table (0-15).
 */
void print_times_table(int n)
{
	if (n < 0 || n > 15)
		return;

	int row, column, product;

	for (row = 0; row <= n; row++)
	{
		for (column = 0; column <= n; column++)
		{
			product = row * column;
			if (column > 0)
			{
				_putchar(',');
				_putchar(' ');
				if (product < 10)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else if (product >= 10 && product < 100)
				{
					_putchar(' ');
				}
			}

			if (product < 10)
				_putchar(' ');

			if (product >= 100)
				_putchar((product / 100) + '0');

			if (product >= 10)
				_putchar(((product / 10) % 10) + '0');

			_putchar((product % 10) + '0');
		}
		_putchar('\n');
	}
}

