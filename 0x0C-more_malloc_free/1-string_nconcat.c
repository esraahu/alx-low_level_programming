#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates two strings
 * @s1: the fist string
 * @s2: the second string
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *x;
	unsigned int i = 0, y = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	if (n < len2)
		x = malloc(sizeof(char) * (len1 + n + 1));
	else
		x = malloc(sizeof(char) * (len1 + len2 + 1));

	if (!x)
		return (NULL);

	while (i < len1)
	{
		x[i] = s1[i];
		i++;
	}

	while (n < len2 && i < (len1 + n))
		x[i++] = s2[y++];

	while (n >= len2 && i < (len1 + len2))
		x[i++] = s2[y++];

	x[i] = '\0';

	return (x);
}
