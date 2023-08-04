#include <stdio.h>
#include "main.h"

/**
 * main - function to print file name
 * @argc: count of the arguments supplied to the program and the
 * @argv: an array of pointers to the strings
 * Return: Always 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}

