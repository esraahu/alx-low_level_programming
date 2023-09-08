#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 *
 * discription: true or false validation
 *
<<<<<<< HEAD
 * Return: Always 0 (success)
=======
 * Return : 0 (success)
>>>>>>> 275c778576484c20b3ea021ee5640f771a4021f2
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%i is positive\n", n);
	else if (n == 0)
		printf("%i is zero\n", n);
	else
		printf("%i is negative\n", n);
	return (0);
}
