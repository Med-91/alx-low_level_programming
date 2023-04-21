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
	char f1, *str1, *str2 = "";
	int i, a;

	i = a = 0;
	va_start(ap, format);
	if (!format)
		return;
	while (format[i] != '\0')
	{
		f1 = format[i];
		switch (f1)
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
				break;
		}
		if (a)
			str2 = ", ";
		i++;
	}
	printf("\n");
	va_end(ap);
}

