#include <stdio.h>
#include <stddef.h>
#include "search_algos.h"

/**
 * print_array - Prints the current part of the array being searched
 * @array: The array to be printed
 * @left: The starting index
 * @right: The ending index
 */
void print_array(int *array, size_t left, size_t right)
{
	size_t i;

	printf("Searching in array: ");
	for (i = left; i <= right; i++)
	{
		if (i > left)
			printf(", ");
		printf("%d", array[i]);
	}
	printf("\n");
}

/**
 * recursive_binary_search - Helper function to perform recursive binary search
 * @array: The array to search in
 * @left: The starting index of the subarray
 * @right: The ending index of the subarray
 * @value: The value to search for
 *
 * Return: The index where the value is located or -1 if not found
 */
int recursive_binary_search(int *array, size_t left, size_t right, int value)
{
	size_t mid;

	if (left > right)
		return (-1);

	print_array(array, left, right);

	mid = left + (right - left) / 2;
	if (array[mid] == value)
	{
		if (mid == left || array[mid - 1] != value)
			return (mid);
		return (recursive_binary_search(array, left, mid, value));
	}
	else if (array[mid] > value)
		return (recursive_binary_search(array, left, mid - 1, value));
	else
		return (recursive_binary_search(array, mid + 1, right, value));
}

/**
 * advanced_binary - Searches for a value in a sorted array of integers
 *                   using an advanced binary search algorithm.
 * @array: A pointer to the first element of the array to search in
 * @size: The number of elements in the array
 * @value: The value to search for
 *
 * Return: The index where the value is located or -1 if not found
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	return (recursive_binary_search(array, 0, size - 1, value));
}
