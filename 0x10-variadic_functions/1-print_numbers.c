#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers
 * @separator: pointer separator
 * @n: number of arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;
	/*variables*/
	va_start(numbers, n);
	if (separator != NULL)
	{
		if (!separator)
			printf("%d", va_arg(numbers, int));
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(numbers, int));
			if (separator != NULL && i < n - 1)
				printf("%s", separator);
		}
	}
	va_end(numbers);
	printf("\n");
}
