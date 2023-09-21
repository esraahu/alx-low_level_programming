#include "main.h"
/**
 * reverse_array - reverse array of integers
 * @a: array
 * @n: number of elements of array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int e;
	int c;

	for (e = 0; e < n--; e++)
	{
		c = a[e];
		a[e] = a[n];
		a[n] = c;
	}
}
