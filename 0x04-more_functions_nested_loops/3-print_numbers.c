#include "main.h"
#include <stdio.h>
/**
 * print_numbers - prints numbers
 *
 *
 */
void print_numbers(void)
{
	int i;
	/*variable declarations*/
	for (i = 0; i < 10; i++)
	{
		_putchar('0' + i);
	}
	_putchar('\n');
}
