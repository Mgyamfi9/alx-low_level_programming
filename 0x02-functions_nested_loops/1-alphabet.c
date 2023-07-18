#include <stdio.h>
#include "main.h"
/**
* print_alphabet - prints alphabets
*/
void print_alphabet(void)
{
	int i;
	/*enters loop*/
	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
