#include "main.h"
/**
 * _strncat - Concatenate two strings
 *
 * @dest: 1st arg typ char
 * @src: 2nd arg typ char
 * @n: num of bytes
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	for (j = 0; dest[j] != '\0'; j++)
		;
	while (src[i] != '\0' && i < n)
	{
		dest[j + i] = src[i];
		i++;
	}
	return (dest);
}
