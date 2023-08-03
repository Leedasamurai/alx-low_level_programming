#include "main.h"
/**
 * factorial - Print factorial of given number
 *
 * @n: arg typ int
 *
 * Return: factorial of given number
 */
int factorial(int n)
{
	if (n == 0 || n == 1)
	{
		return (1);
	}
	if (n > 1)
	{
		return (n * factorial(n - 1));
	}
	else
	{
		return (-1);
	}
}
