#include <stdio.h>
#include "main.h"

/**
 * print_binary - unction that prints the binary representation of a number
 *
 * @n: number that represents a binaryy rep
 */
void print_binary(unsigned long int n)
{
	int flag;
	unsigned long int mask;

	flag = 0;
	mask = 1UL << (sizeof(unsigned long int) * 8 - 1);

	while (mask > 0)
	{
		if ((n & mask) != 0)
		{
			_putchar('1');
			flag = 1;
		}
		else if (flag || mask == 1)
		{
			_putchar('0');
		}
		mask >>= 1;
	}
}
