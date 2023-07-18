#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _abs - prints absolute value
 *@n: value to check
 * Return: Always 0.
 */
int _abs(int n)
{
	int absolute = abs(n);
	/*print absolute*/
	_putchar('0' + absolute);
	return (0);
}
