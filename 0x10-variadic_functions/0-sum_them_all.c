#include "variadic_functions.h"
#include <stdarg.h>

/**
 *sum_them_all - Returns the sum numbers.
 *@n: The number of paramters
 *@... : A variable number of paramters
 *Return: an int
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int i, sum = 0;

	va_start(list, n);

	for (i = 0; i < n; i++)
		sum += va_arg(list, int);
	va_end(list);
	return (sum);
}
