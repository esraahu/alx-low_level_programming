#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be capitalized.
 *
 * Return: A pointer to the changed string.
 */
char *cap_string(char *str)
{
	int cont = 0;

	while (str[cont])
	{
		while (!(str[cont] >= 'a' && str[cont] <= 'z'))
			cont++;

		if (str[cont - 1] == ' ' ||
		    str[cont - 1] == '\t' ||
		    str[cont - 1] == '\n' ||
		    str[cont - 1] == ',' ||
		    str[cont - 1] == ';' ||
		    str[cont - 1] == '.' ||
		    str[cont - 1] == '!' ||
		    str[cont - 1] == '?' ||
		    str[cont - 1] == '"' ||
		    str[cont - 1] == '(' ||
		    str[cont - 1] == ')' ||
		    str[cont - 1] == '{' ||
		    str[cont - 1] == '}' ||
		    cont == 0)
			str[cont] -= 32;

		cont++;
	}

	return (str);
}
