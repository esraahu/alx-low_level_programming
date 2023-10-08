#include <stdlib.h>
#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @s: memory area to be filled
 * @b: copy char
 * @n: number of times to copy b
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}

	return (s);
}

/**
 * *_calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each element
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *y;

	if (nmemb == 0 || size == 0)
		return (NULL);

	y = malloc(size * nmemb);

	if (y == NULL)
		return (NULL);

	_memset(y, 0, nmemb * size);

	return (y);
}
