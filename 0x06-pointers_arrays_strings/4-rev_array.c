#include "main.h"
#include <stdio.h>
/**
 * reverse_array - reverses an array
 * @a: pointer variable
 * @n: array to reverse
 */
void reverse_array(int *a, int n)
{
	int i;
	for (i = n - 1; i >= 0; i--)
	{
		_putchar('0' + a[i])
	}
}
