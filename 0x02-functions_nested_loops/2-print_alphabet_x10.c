#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	char alpha;
	for (alpha = 0; alpha < 10; alpha++)
	{
		char ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
	}
	return alpha;
}
