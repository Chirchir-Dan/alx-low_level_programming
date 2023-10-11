#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index - Search for an integer in an array using
 * a custom comparison function.
 * @array: The array of integers.
 * @size: The number of elements in the array.
 * @cmp: A pointer to a custom comparison function.
 *
 * Return: Index of the first non-zero cmp result, or -1 if no match is found.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}

	return (-1);
}
