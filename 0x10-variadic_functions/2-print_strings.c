#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**print_strings - prints strings
 * @separator: separates strings
 * @n: number of arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i;
	char *nstring;
	char *str;
	/*variables*/
	nstring = "(nil)";
	va_start(strings, n);
	str = va_arg(strings, char *);
	for (i = 0; i < n; i++)
	{
		if (str == NULL)
			printf("%s", nstring);
		else
			printf("%s", str);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	va_end(strings);
	printf("\n");
}
