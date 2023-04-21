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
	char f1, f2, *str;
	int i, a, b;

	i = a = b = 0;
	va_start(ap, format);
	while (format[i] != '\0')
	{
		f1 = format[i];
		f2 = format[i + 1];
		b = 0;
		switch (f1)
		{
			case 's':
				str = va_arg(ap, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				a = 1;
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				a = 1;
				break;
			case 'c':
				printf("%c", va_arg(ap, int));
				a = 1;
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				a = 1;
				break;
		}
		switch (f2)
		{
			case 's':
				b = 1;
				break;
			case 'c':
				b = 1;
				break;
			case 'i':
				b = 1;
				break;
			case 'f':
				b = 1;
				break;
		}
		if (a && b)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(ap);
}

