#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * print_rev - prints string in reverse
 * @s: string to print
 */
void print_rev(char *s)
{
	if (s == NULL)
		return;
	int length = strlen(s);
	/*variable declaration*/
	for (int i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar("\n");
}
