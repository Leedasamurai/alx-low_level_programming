#include "main.h"
/**
 * rev_string - Reverse a string
 *
 * @s: arg typ char
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i, j, k, l;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	j = 0;
	l = i;
	i--;

	while (j < l / 2)
	{
		k = s[j];
		s[j] = s[i];
		s[i] = k;
		i--;
		j++;
	}
}
