#include "main.h"

/**
 * printTimesTable - prints the n times table, starting with 0
 * @n: number of the times table
 */
void printTimesTable(int n)
{
	if (n >= 0 && n <= 15)
	{
		for (int row = 0; row <= n; row++)
		{
			printRow(row, n);
		}
	}
}

/**
 * printRow - prints a single row of the times table
 * @row: the current row to print
 * @n: the highest value for the times table
 */
void printRow(int row, int n)
{
	for (int column = 0; column <= n; column++)
	{
		int product = row * column;

		printProduct(product, column == 0);
	}
	_putchar('\n');
}

/**
 * printProduct - prints the product of two numbers with formatting
 * @product: the product to print
 * @isFirstColumn: true if it's the first column in the row, false otherwise
 */
void printProduct(int product, bool isFirstColumn)
{
	if (!isFirstColumn)
	{
		_putchar(',');
		_putchar(' ');
		if (product < 100)
		{
			_putchar(' ');
			if (product < 10)
			{
				_putchar(' ');
			}
		}
	}

	_putchar(product + '0');
}

