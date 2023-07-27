#include "main.h"
/**
 * reverse_array - Reverse contants of arrays
 *
 * @a: 1st arg typ int
 * @n: 2nd arg typ int
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int temp;

	i = temp = 0;
	n -= 1;

	while (i <= n)
	{
		temp = a[n];
		a[n--] = a[i];
		a[i++] = temp;
	}
}
