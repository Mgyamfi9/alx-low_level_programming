#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int _islower(int c)
{
	if (islower(c))
	{
		_putchar('1');
	}
	else
	{
		_putchar('0');
	}
}
