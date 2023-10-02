#include "main.h"
/**
 * _memset - fill a block of memory with a specific value
 * @s: starting address of memory to be filled
 * @b: the desired value
 * @n: changed number of bytes
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int t = 0;

	for (; n > 0; t++)
	{
		s[t] = b;
		n--;
	}
	return (s);
}
