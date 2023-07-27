#include "main.h"
/**
 * _strcat - Concatenate two strings
 *
 * @dest: arg typ char 1st
 * @src: 2nd arg typ char
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}

	while (j >= 0)
	{
		*(dest + i) = *(src + j);
		if (*(src + j) == '\0')
			break;
		i++;
		j++;
	}
	return (dest);
}
