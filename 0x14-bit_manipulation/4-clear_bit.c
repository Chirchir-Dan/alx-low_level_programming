/**
 * clear_bit - Set the value of a bit to 0 at a given index.
 * @n: A pointer to the unsigned long integer.
 * @index: The index of the bit to clear (starting from 0).
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);  /* Index is out of bounds. */
	}

	mask = 1UL << index;
	mask = ~mask;  /* Invert the mask to clear the bit. */
	*n = *n & mask;
	return (1);
}

