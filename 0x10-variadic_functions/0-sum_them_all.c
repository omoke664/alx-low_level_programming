#include <stdarg.h>
#include "variadic_functions.h"

/**
*
*
*
*/
int sum_them_all(const usigned int n, ...)
{
	if (n==0)
	{
		return 0;
	}

	va_list args;
	va_start(args, n);

	int total=0;
	for (unsigned int i=0; i<n; i++)
	{
		total += va_arg(args, int);
	}

	va_end(args);
	return total;
}
