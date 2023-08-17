#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sums all arguments
 * @n: number of arguments
 * Return: results of sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	va_start(nums, n);
	/*stdargs macros*/
	int i;
	/*variable to check count*/
	int result = 0;
	/*variables*/
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		result = result + va_arg(nums, int);
	}
	va_end(nums);
	return (result);
}
