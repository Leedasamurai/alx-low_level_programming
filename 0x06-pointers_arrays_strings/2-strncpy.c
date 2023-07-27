#include "main.h"
/**
 * _strncpy - Copy string
 *
 * @dest: 1st arg typ char
 * @src: 2nd arg typ char
 * @n: 3rd arg typ int
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
		dest[i] = src[i];
	while (i < n)
		dest[i++] = '\0';
	return (dest);
}

