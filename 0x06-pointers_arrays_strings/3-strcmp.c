#include "main.h"
/**
 * _strcmp - Compare two strings
 *
 * @s1: 1st arg typ char
 * @s2: 2nd arg typ char
 *
 * Return: difference between the two
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i]; i++)
		;
	return (s1[i] - s2[i]);
}
