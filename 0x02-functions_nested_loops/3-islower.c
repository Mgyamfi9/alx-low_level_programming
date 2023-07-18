#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * _islower - prints 1 if lowercase
 *@c: the the character to check
 * Return: 1 if number is lowercase.
 */
int _islower(int c)
{
	if (islower(c))
	{
		_putchar('1' + c);
		return (1);
	}
	else
	{
		_putchar('0' + c);
		return (0);
	}
}
