#include "main.h"
#include <stdio.h>
/**
 * print_numbers - prints numbers
 * Return: 0 success
 */
void print_numbers(void)
{
	int i;
	/*variable declarations*/
	i = 0;
	for (i; i < 10; i++)
	{
		_putchar('0' + i);
	}
	_putchar('\n');
}
