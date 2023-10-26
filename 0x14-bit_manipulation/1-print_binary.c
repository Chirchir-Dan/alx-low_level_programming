#include "main.h"

/**
 * print_binary - Print the binary representation of a number.
 * @n: The unsigned long integer to be printed in binary.
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int start = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (mask > 0)
	{
		if ((n & mask) || start)
		{
			_putchar((n & mask) ? '1' : '0');
			start = 1;
		}
		mask >>= 1;
	}
}

