#include "main.h"  /* Include your header file here */

/**
 * print_numbers - Prints numbers from 0 to 9 followed by a new line
 */
void print_numbers(void)
{
	char digit = '0';

	while (digit <= '9')
	{
		_putchar(digit);
		digit++;
	}
	_putchar('\n');
}

