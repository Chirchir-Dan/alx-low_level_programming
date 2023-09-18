#include <stdio.h>

/**
 * reset_to_98 - Updates the value an integer pointer points to 98.
 * @n: A pointer to an integer.
 */
void reset_to_98(int *n)
{
	*n = 98;
}

int main(void)
{
	int number = 42;

	printf("Before reset: %d\n", number);

	reset_to_98(&number);  /* Call the reset_to_98 function with a pointer to number */

	printf("After reset: %d\n", number);

	return (0);
}

