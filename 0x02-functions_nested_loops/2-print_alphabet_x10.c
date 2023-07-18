#include "main.h"
/**
 * print_alphabet_x10 - Print 10x the alphabet in lowercase
 *
 * Return: always 0 (success)
 */
void print_alphabet_x10(void)
{
	char j;
	int i = 0;

	while (i <= 9)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
		i++;
	}
}
