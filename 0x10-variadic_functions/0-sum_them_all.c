#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its paramters.
 * @n: The number of paramters function.
 * @...: A variable of paramters to calculate the sum of.
 *
 * Return: If n == 0 - 0.
 *         Otherwise - the sum of all parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ls;
	unsigned int x, sum = 0;

	va_start(ls, n);

	for (x = 0; x < n; x++)
		sum += va_arg(ls, int);

	va_end(ls);

	return (sum);
}
