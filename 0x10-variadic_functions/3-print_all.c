#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/*
*print_all - prints anything
*@format - is a list of types of arguments pssed to the function.
*print a new line at the end of your function.
*
*/
void print_all(const char *, const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char c;
	char *str;

	va_start(args, format);

	while (format && format[i])
	{
		c = format[i];
		if (c == 'c')
		{
			printf("%c", va_arg(args, int));
		}
		else if (c == 'i')
		{
			printf("%d", va_arg(args, int));
		}
		else if (c == 'f')
		{
			printf("%f", (float)va_arg(args, double));
		}
		else if (c == 's')
		{
			str = va_arg(args, char *);
			if (str == NULL)
			{
				printf("(nil)");
			else
			{
				printf("%s", str);
			}
		}
		if ((format[i + 1] != '\0') && (c == 'c' || c == 'i' || c == 'f' || c == 's'))
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
