#include "main.h"
/**
 * swap_int - Swap values of a and b
 *
 * @a: int type
 * @b: int type
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
