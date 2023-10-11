#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - prints executes a function given as a parameter on each element of an array
 * @array: int array
 * @size: size of array
 * @action: pointer to print in regular or hex
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array == NULL || action == NULL)
		return;

	for (x = 0; x < size; x++)
	{
		action(array[x]);
	}
}
