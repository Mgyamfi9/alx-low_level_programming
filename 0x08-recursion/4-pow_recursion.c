#include "main.h"
#include <stdio.h>
#include <math.h>
/**
 * _pow_recursion - returns value of x raised to y
 * @x: base value of the number to be raised
 * @y: value of the power
 * Return: 0 always success
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	       return (-1);
	if ( y == 0)
	{
		return (1);
	}
	else if ( y == 1)
	{
		return (x);
	}
	else
	{
		return (pow(x, y));
	}	
}
