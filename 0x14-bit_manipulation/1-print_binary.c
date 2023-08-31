#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: number to convert
 */
void print_binary(unsigned long int n)
{
	int size;
	int zeros;
	int i;
	/*variables*/
	size = sizeof(n) * 8;
	zeros = 1;
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	for (i = size - 1; i >= 0; i--)
	{
		if (n & (1UL << i))
		{
			zeros = 0;
			_putchar('1');
		}
		else if (!zeros)
			_putchar('0');
	}
}
