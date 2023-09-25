#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the diagonals of a square matrix.
 * @a: Pointer to the square matrix (2D array) of integers.
 * @size: The size of the square matrix.
 *
 * Return: None.
 */
void print_diagsums(int *a, int size)
{
    int sum1 = 0; /* Sum of the main diagonal (top-left to bottom-right) */
    int sum2 = 0; /* Sum of the secondary diagonal (top-right to bottom-left) */
    int i;

    /* Calculate the sums of both diagonals */
    for (i = 0; i < size; i++)
    {
        sum1 += a[i * size + i]; /* Main diagonal elements */
        sum2 += a[i * size + (size - 1 - i)]; /* Secondary diagonal elements */
    }

    /* Print the sums */
    printf("%d, %d\n", sum1, sum2);
}

