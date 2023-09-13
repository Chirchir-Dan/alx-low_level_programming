#include "main.h"

/**
 * print_times_table - Print the times table for n, starting from 0.
 * @n: The desired times table (0-15).
 */
void print_times_table(int n)
{
	int row, column;

	if (n < 0 || n > 15)
		return;

	for (row = 0; row <= n; row++)
	{
		for (column = 0; column <= n; column++)
		{
			int product = row * column;

			if (column > 0)
			{
				_putchar(',');
				_putchar(' ');
				if (product < 100)
				{
					_putchar(' ');
					if (product < 10)
						_putchar(' ');
				}
			}

			if (product < 10)
				_putchar(' ');
			else
			{
				_putchar((product / 100) + '0');
				_putchar(((product / 10) % 10) + '0');
			}

			_putchar((product % 10) + '0');
		}
		_putchar('\n');
	}
}

