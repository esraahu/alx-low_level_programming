# include <stdio.h>

/**
 * main - print the alphabet except q and e
 *
 * Return: 0 Always (success)
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'e' || ch == 'q')
			ch++;
			putchar(ch);
			ch++;
	}
	putchar ('\n');
	return (0);
}
