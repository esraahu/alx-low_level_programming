#include "main.h"
/**
 * puts_half - i function that prints half of a string
 * if odd len, x = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{
	int i, x, length;

	length = 0;

	for (i = 0; str[i] != '\0'; i++)
		length++;

	x = (length / 2);

	if ((length % 2) == 1)
		x = ((length + 1) / 2);

	for (i = x; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
