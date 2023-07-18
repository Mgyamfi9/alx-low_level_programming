#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - check the code
 *@num: value to check
 * Return: Always 0.
 */
int print_last_digit(int num)
{
	int last_digit;
	/*declare int*/
	/*start calculation*/
	last_digit = num % 10;
	if (last_digit < 0)
	{
		last_digit *= -1;
	}
	_putchar('0' + last_digit);
	return (last_digit);
}       
