#include "main.h"
/**
 * _pow_recursion - Prints x raised to the power y
 *
 * @x: arg typ int
 * @y: arg typ int
 *
 * Return: if negative 0
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	if (y == 1)
	{
		return (x);
	}
	if (y > 1)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else
	{
		return (-1);
	}
}
