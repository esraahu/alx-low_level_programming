#include <stdio.h>
#include <math.h>
#include "main.h"

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int a;
	long int max;
	long int e;

	a = 612852475143;
	max = -1;

	while (a % 2 == 0)
	{
		max = 2;
		a /= 2;
	}

	for (e = 3; e <= sqrt(a); e = e + 2)
	{
		while (a % e == 0)
		{
			max = e;
			a = a / e;
		}
	}

	if (a > 2)
		max = e;

	printf("%ld\n", max);

	return (0);
}
