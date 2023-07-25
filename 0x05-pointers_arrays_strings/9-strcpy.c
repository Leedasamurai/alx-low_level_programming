#include "main.h"
/**
 * _strcpy - Copy string into array
 *
 * @dest: 1st arg char type pointer
 * @src: 2nd arg char type pointer
 *
 * Return: void
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < src[i]; i++)
		dest[i] = '\0';
	return (dest);
}
