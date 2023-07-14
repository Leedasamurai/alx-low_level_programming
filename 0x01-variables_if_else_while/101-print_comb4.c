#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: different combinations of three digits
 * Return: always 0 (success)
 */
int main(void)
{
	int n;
	int m;
	int w;
	for (n = 0; n < 8; n++)
	{
		for (m = n + 1; m < 9; m++)
		{
			for (w = m + 1; w < 10; w++)
			{
				putchar((n % 10) + '0');
				putchar((m % 10) + '0');
				putchar((w % 10) + '0');
				if (n == 7 && m == 8 && w == 9)
				{
					continue;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
