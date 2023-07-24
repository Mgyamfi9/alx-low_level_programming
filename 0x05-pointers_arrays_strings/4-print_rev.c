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
	int i;
	/*variable declaration*/
	for (i = strlen(s) - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
