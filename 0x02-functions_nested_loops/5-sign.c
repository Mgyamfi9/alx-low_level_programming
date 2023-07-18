#include "main.h"
#include <stdio.h>
/**
 * print_sign - prints the sign
 *@n: the the character to check
 * Return: 1 if number is lowercase.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
