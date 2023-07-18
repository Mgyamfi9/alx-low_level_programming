#include "main.h"
#include <stdio.h>
/**
* print_times_table - prints timetable
* @n: value to use in code
*/
void print_times_table(int n)
{
	if (n < 0 || n > 15)
	{
		 _putchar(0);
	}
	int i, j;
	/*variable declarations*/
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			int result;
			result = i * j;
			if (j != 0)
			{
				_putchar(',');
				_putchar(' ')
				if (result < 10)
				{
					_putchar(' ');
				}
				if (result < 100)
				{
					_putchar(' ');
				}
            _putchar(result);
			}
			_putchar('\n');
		}
	}
}
