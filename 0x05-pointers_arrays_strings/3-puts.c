#include "main.h"
/**
 * _puts - Print a string
 *
 * @str: int type char
 *
 * Return: void
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
