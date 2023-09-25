#include "main.h"
/**
 * _strspn - Entry point
 * @s: input type
 * @accept: input type
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int m;

	while (*s)
	{
		for (m = 0; accept[m]; r++)
		{
			if (*s == accept[m])
			{
				n++;
				break;
			}
			else if (accept[m + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
