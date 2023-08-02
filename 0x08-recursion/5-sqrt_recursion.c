#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the square root of
 *
 * Return: the resulting square root
 */
/**
int _sqrt_recursion(int n)
{
	int i;
	/*variable*/
	if (n < 0)
		return (-1);
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt_recursion(n, i + 1));
}
