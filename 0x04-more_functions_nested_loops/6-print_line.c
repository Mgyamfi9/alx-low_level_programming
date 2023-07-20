#include "main.h"
#include <stdio.h>
/**
 * print_line - prints line
 * @n: number of lines to print
 */
void print_line(int n)
{
	if (n > 0)
	{
		int i;
		/*declaration*/
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
