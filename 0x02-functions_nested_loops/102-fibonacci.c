#include <stdio.h>
/**
 * main - Print fibonacci sequence starting from 1 and 2 to 50 numbers.
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int count;
	unsigned long fib1 = 0, fib2 = 1, sum;

	sum = fib1 + fib2;
		printf("%lu", sum);

		fib1 = fib2;
		fib2 = sum;

		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
