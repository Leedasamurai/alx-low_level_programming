#include "main.h"
/**
 * _isdigit - Digit checker.
 *
 * @c: Character we are checking
 *
 * Return: 1 when uppercase and 0 when lowercase
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
