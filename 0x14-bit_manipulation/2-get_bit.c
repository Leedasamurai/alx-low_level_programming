#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 *
 * @n: num we get bit from
 * @index: where bit is gotten from
 *
 * Return: value or -1 if erroe
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	mask = 1UL << index;

	if ((n & mask) == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
