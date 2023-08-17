#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/*
*print_strings - prints strings followed by a new line.
*@n: the number of strings passed to the function.
@separator: the string to be pinted between the strings.
*if NULL don't print.
*print new line at the end of function.
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list(words);
	va_start(words, n);

	for (unsigned int y = 0; y < n; y++)
	{	
		const char *word = va_arg(words, const char *);

		if (word == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", word);
		}

		if (y < (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}

		va_end(words);
		printf("\n");
	}
}
