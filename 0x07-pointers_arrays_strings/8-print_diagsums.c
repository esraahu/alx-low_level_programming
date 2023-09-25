#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Entry point
 * @a: input type
 * @size: input type
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
	int sum0, sum1, l;

	sum0 = 0;
	sum1 = 0;

	for (l = 0; l < size; l++)
	{
		sum0 = sum0 + a[l * size + l];
	}

	for (l = size - 1; l >= 0; l--)
	{
		sum1 += a[l * size + (size - l - 1)];
	}

	printf("%d, %d\n", sum0, sum1);
}
