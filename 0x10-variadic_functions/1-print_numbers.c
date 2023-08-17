#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_number - prints numbers
 * @separator: pointer separator
 * @n: number of arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;
	/*variables*/
	va_start(numbers, n);
	if (separator == NULL)
		return;
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(numbers, int));
		if (i < n - 1)
			printf("%s", separator);
	}
	va_end(numbers);
	printf("\n");
}
