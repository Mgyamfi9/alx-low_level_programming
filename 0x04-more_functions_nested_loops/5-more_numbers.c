#include "main.h"
#include <stdio.h>
/**
 * more_numbers - prints 1-15 ten times
 */
void more_numbers(void)
{
	int i;
	int a;
	/*decalration*/
	for (i = 0; i < 10 ;i++)
	{
		for (a = 0; a < 15; a++)
		{
			if (a > 9)
			{
				_putchar('1');
			}
			_putchar('0' + a % 10);
		}
		_putchar('\n');
	}
}
