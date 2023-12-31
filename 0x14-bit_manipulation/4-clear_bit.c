#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index
 *
 * @n: point at num where bit is cleared
 * @index: the bit to clear
 *
 * Return: 1 success or -1 error
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
