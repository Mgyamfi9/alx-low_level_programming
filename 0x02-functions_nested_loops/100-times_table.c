#include "main.h"
#include <stdio.h>
/**
* print_times_table - prints timetable
* @n: value to use in code
*/
void print_times_table(int n)
{
	int i;
	int j;
	/*variable declarations*/
	if (n < 0 || n > 15)
	{
		return;
	}
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			int result;
			/*declarations*/
			result = i * j;
			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');
				if (result < 10)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else if (result < 100)
				{
					_putchar(' ');
				}
				_putchar(result % 10 + '0');
			}
			else
			{
				_putchar('0');
			}
		}
		_putchar('\n');
	}
}
