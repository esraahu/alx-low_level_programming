#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints buffer
 * @b: buffer
 * @size: size
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int e, j, i;

	e = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (e < size)
	{
		j = size - e < 10 ? size - e : 10;
		printf("%08x: ", e);
		for (i = 0; i < 10; i++)
		{
			if (i < j)
				printf("%02x", *(b + e + i));
			else
				printf("  ");
			if (i % 2)
			{
				printf(" ");
			}
		}
		for (i = 0; i < j; i++)
		{
			int c = *(b + e + i);

			if (c < 32 || c > 132)
			{
				c = '.';
			}
			printf("%c", c);
		}
		printf("\n");
		e += 10;
	}
}
