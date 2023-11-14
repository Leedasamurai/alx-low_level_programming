#include "main.h"
/**
 * _strpbrk - Search string for set of bytes
 *
 * @s: arg typ char
 * @accept: arg typ char
 *
 * Return: pointer to 1st accurance
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		i = 0;
		while (*(accept + i) != '\0')
		{
			if (*(accept + i) == *s)
				return (s);
			i++;
		}
		s++;
	}
	return (0);
}
