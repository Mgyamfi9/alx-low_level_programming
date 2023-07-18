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
	num = -num;
	/*start calculation*/
	last_digit = num % 10;
	_putchar(last_digit + '0');
	return (last_digit);
}       
