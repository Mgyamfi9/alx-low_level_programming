#include "main.h"
#include <stdio.h>
/**
 * factorial - returns factorial of a number
 * @n: number to calculate factorial of
 * Return: 0 Always success
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
