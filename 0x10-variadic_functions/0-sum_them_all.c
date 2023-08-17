#include <stdarg.h>
#include "variadic_functions.h"

/**
*sum_them_all - Returns the sum of all its parameters.
*@n: The number of parameters passed to the function.
@...: A variable number of parameters to calculate the total.
*
* Return: If n == 0 
*/
int sum_them_all(const usigned int n, ...)
{
	if (n == 0)
	{
		return 0;
	}

	va_list args;
	va_start(args, n);

	int total=0;
	for (unsigned int i = 0; i < n; i++)
	{
		total += va_arg(args, int);
	}

	va_end(args);
	return total;
}
