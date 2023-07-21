#include "main.h"
#include <stdio.h>
/**
 * print_diagonal - prints diagonal
 *@n: number of times to print
*/
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;
		/*variable declaration*/
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
