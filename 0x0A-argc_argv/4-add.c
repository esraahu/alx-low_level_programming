#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_num - check - string there are digit
 * @str: array lest
 *
 * Return: Always 0 (Success)
 */
int check_num(char *str)
{
	/*Declaring variables*/
	unsigned int counta;

	counta = 0;
	while (counta < strlen(str)) /*counta string*/

	{
		if (!isdigit(str[counta])) /*check if str there are digit*/
		{
			return (0);
		}

		counta++;
	}
	return (1);
}

/**
 * main - Print the name of the program
 * @argc: Counta
 * @argv: Arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])

{

	/*Declaring variables*/
	int counta;
	int str_to_int;
	int sum = 0;

	counta = 1;
	while (count < argc) /*Goes through the whole array*/
	{
		if (check_num(argv[counta]))

		{
			str_to_int = atoi(argv[counta]); /*ATOI --> convert string to int*/
			sum += str_to_int;
		}

		/*Condition if one of the number contains symbols that are not digits*/
		else
		{
			printf("Error\n");
			return (1);
		}

		counta++;
	}

	printf("%d\n", sum); /*print sum*/

	return (0);
}
