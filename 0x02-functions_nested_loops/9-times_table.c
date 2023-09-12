#include "main.h"

/**
 * times_table - that prints the 9 times table, starting with 0
 * Return: Always 0.
 */
void times_table(void)
{
	int a;
	int b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			int num = b * a;

			if (b == 0)
			{
				putchar('0');
			} else if (num <= 9)
			{
				putchar(',');
				putchar(' ');
				putchar(' ');
				putchar(num + '0');
			} else
			{
				putchar(',');
				putchar(' ');
				putchar(num / 10 + '0');
				putchar(num % 10 + '0');
			}
		}
		putchar('\n');
	}
}
