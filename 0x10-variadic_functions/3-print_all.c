#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - function that prints any thing
 * @format: list of types of arguments passed
 *	c: char
 *	i: integer
 *	f: float
 *	s: char * (if the string is NULL, print (nil) instead
 *	any other char should be ignored
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	char *str1, *str2 = "";
	int i = 0, a = 0;

	if (format)
	{
		va_start(ap, format);
		while (format[i] != '\0')
		{
			switch (format[i])
			{
				case 's':
					str1 = va_arg(ap, char *);
					if (str1 == NULL)
						str1 = "(nil)";
					printf("%s%s", str2, str1);
					a = 1;
					break;
				case 'i':
					printf("%s%d", str2, va_arg(ap, int));
					a = 1;
					break;
				case 'c':
					printf("%s%c", str2, va_arg(ap, int));
					a = 1;
					break;
				case 'f':
					printf("%s%f", str2, va_arg(ap, double));
					a = 1;
			}
			switch (a)
			{
				case 1:
					str2 = ", ";
			}
			i++;
		}
		va_end(ap);
	}
	printf("\n");
}

