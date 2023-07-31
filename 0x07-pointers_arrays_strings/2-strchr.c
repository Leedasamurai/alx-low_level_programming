#include "main.h"
#include <stdio.h>
/**
 * _strchr - Locates a character in a string.
 *
 * @s: pointer typ char
 * @c: typ char
 *
 * Return: poiter to c in string s
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (*(s + i))
	{
		if (*(s + i) == c)
			return (s + i);
		i++;
	}
	if (*(s + i) == c)
		return (s + i);
	return (NULL);
}
