#include "main.h"
/**
 * get_bit - Get the value of a bit at a given index.
 * @n: The unsigned long integer.
 * @index: The index of the bit to retrieve (starting from 0).
 *
 * Return: The value of the bit at index index, or -1 if an error occurred.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	 unsigned long int mask = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	if (n & mask)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
