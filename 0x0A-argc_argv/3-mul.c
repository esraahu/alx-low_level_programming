#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int i, x, n, len, m, digit;

	i = 0;
	x = 0;
	n = 0;
	len = 0;
	m = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && m == 0)
	{
		if (s[i] == '-')
			++x;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (x % 2)
				digit = -digit;
			n = n * 10 + digit;
			m = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			m = 0;
		}
		i++;
	}

	if (m == 0)
		return (0);

	return (n);
}

/**
 * main - multiplies two numbers
 * @argc: int number
 * @argv: lest array
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int result, numb1, numb2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	numb1 = _atoi(argv[1]);
	numb2 = _atoi(argv[2]);
	result = numb1 * numb2;

	printf("%d\n", result);

	return (0);
}
