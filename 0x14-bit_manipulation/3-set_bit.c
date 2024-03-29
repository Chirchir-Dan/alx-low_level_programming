/**
 * set_bit - Set the value of a bit to 1 at a given index.
 * @n: A pointer to the unsigned long integer.
 * @index: The index of the bit to set (starting from 0).
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int long mask;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);  /* Index is out of bounds.*/
	}

	mask = 1UL << index;
	*n = *n | mask;
	return (1);
}
