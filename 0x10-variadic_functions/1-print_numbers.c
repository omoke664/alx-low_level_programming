#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/*
* print_numbers-prints numbers followed by a new line.
* @separator: The string to be printed betwee numbers.
* @n: The number of integers passed to the function.
* @...: A variable number of numbers to be printed.
* 
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list total;
	va_start(total, n);

	for (unsigned int x = 0; x < n; x++)
	{
		int total = va_arg(total, int);
		print("%d", total);

		if (x < (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(total);

	printf("\n");
}

