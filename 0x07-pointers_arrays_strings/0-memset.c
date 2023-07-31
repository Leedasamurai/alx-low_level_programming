#include "main.h"
/**
 * _memset - Fill the memory with constant bytes
 *
 * @s: pointer arg typ char
 * @b: arg typ char
 * @n: arg typ int
 * Return: pointer to memory s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;
	char *start = s;

	while (i < n)
	{
		*s++ = b;
		i++;
	}
	return (start);
}
