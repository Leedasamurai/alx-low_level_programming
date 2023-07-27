#include "main.h"
/**
 * string_toupper - Write in lowercase
 *
 * @c: arg typ char
 * Return: conerted value
 */
char *string_toupper(char *c)
{
	int i;

	i = 0;

	while (c[i] != '\0')
	{
		if (c[i] >= 'a' && c[i] <= 'z')
			c[i] -= 'a' - 'A';
		i++;
	}
	return (c);
}
