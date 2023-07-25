#include "main.h"
/**
 * print_rev - Print string in reverse
 *
 * @s: arg typ char
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i;

	i = 0;

	while (*(i + s) != '\0')
	{
		i++;
	}
	i -= 1;

	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
}
