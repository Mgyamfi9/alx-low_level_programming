#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int print_last_digit(int num)
{
	last_digit = num % 10;
	_putchar('0' + last_digit);
}       