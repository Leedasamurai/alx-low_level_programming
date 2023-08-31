#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: Pointer to the number in which to clear the bit.
 * @index: The index of the bit to clear (starting from 0).
 *
 * Return: 1 if the bit was cleared successfully, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	mask = 1UL << index;
	mask = ~mask;
	*n = *n & mask;

	return (1);
}
