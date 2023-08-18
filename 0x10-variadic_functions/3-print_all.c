#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - prints anything
 * @format: pointer function
 */
void print_all(const char * const format, ...)
{
	va_list prints;
	char *string;
	char *str;
	int i;

	va_start(prints, *format);
	string = va_arg(prints, char *);
	str = "(nil)";
	i = 0;
	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(prints, int));
				break;
			case 'i':
				printf("%d", va_arg(prints, int));
				break;
			case 'f':
				printf("%f", va_arg(prints, double));
				break;
			case 's':
				string = va_arg(prints, char *);
				if (!string)
                			printf("%s", str);
				else
					printf("%s", string);
				break;
			default:
				i++;
				continue;
		}
		if (format[i] + 1 != '\0')
			printf(", ");
		i++;
	}
	va_end(prints);
	printf("\n");
}
