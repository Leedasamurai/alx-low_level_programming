#include "main.h"
#include <stdio.h>
/**
 * print_array - Print n in array of int
 *
 * @a: 1st arg typ int
 * @n: 2nd arg typ int
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
