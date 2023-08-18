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
	int i;

	va_start(prints, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		int stop;

		stop = 0;
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(prints, int));
				break;
			case 'i':
				printf("%i", va_arg(prints, int));
				break;
			case 'f':
				printf("%f", va_arg(prints, double));
				break;
			case 's':
				string = va_arg(prints, char *);
				if (string == NULL)
                			string = "(nil)";
				printf("%s", string);
				break;
			default:
				stop = 1;
				break;
		}
		if (format[i + 1] != '\0' && stop == 0)
			printf(", ");
		i++;
	}
	va_end(prints);
	printf("\n");
}
