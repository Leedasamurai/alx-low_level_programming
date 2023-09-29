#include "main.h"

/**
 * get_endianness - function that checks the endianness
 *
 * Return: 0 big or 1 lil
 */
int get_endianness(void)
{
	unsigned int num;
	char *byte;

	num = 1;
	byte = (char *)&num;

	return (*byte == 1);
}
