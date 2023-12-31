#include <stddef.h>
#include "main.h"

/**
 * binary_to_uint - turns binary into unsigned int
 * @b: pointing to a string of 0 and 1 chars
 *
 * Return: converted number, or 0 if unsuccessful
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result;
	int i;

	if (b == NULL)
	{
		return (0);
	}

	result = 0;

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0')
		{
			result = result * 2;
		}
		else if (b[i] == '1')
		{
			result = result * 2 + 1;
		}
		else
		{
			return (0);
		}
	}
	return (result);
}

