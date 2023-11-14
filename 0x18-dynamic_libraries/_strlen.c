#include "main.h"
/**
 * _strlen - print length of string
 *
 * @s: int type char
 *
 * Return: value
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (*(i + s) != '\0')
	{
		i++;
	}
	return (i);
}
