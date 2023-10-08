#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: minimum range of values stored (included)
 * @max: maximum range of values stored (included) and number of elements
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *x;
	int y, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	x = malloc(sizeof(int) * size);

	if (x == NULL)
		return (NULL);

	for (y = 0; min <= max; y++)
		x[y] = min++;

	return (x);
}
