#include "main.h"
/**
 * print_sign - Print sign of number
 * @n: Input number as integer
 *
 * Result: 1 greater than 0, 0 greater than 1 and -1 less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(45);
		return (0);
	}
	else
	{
		_putchar(48);
		return (-1);
	}
	_putchar('\n');
}

