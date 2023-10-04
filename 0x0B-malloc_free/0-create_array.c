#include "main.h"
#include <stdlib.h>

/**
 * create_array - create array of chars and initializes char c
 * @size: size of array
 * @c: char to  initializes
 * Description: creat array of chars and initializes char c
 * Return: pointer to array, NULL if fail
 *
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int x;

	s = malloc(sizeof(char) * size);

	if (size == 0 || s == NULL)
		return (NULL);

	for (x = 0; x < size; x++)
		s[x] = c;

	return (s);
}
