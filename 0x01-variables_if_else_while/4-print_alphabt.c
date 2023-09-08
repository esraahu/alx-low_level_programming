# include <stdio.h>

/**
 * main - print the alphabet except q and e
 *
 * Return: 0 Always (success)
 */
int main(void)
{
	int a;

	for (a = 97; a < 123; a++)
	{
		if (a != 101 && a != 113)
		{
			putchar(a);
		}
	}

	putchar ('\n');

	return (0);
}
