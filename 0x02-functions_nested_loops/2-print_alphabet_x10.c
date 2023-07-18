#include "main.h"
#include <stdio.h>
/**
 * print_alphabet_x10 - print a-z 10x
 */
void print_alphabet_x10(void)
{
	char alpha;
	/*enter loop*/
	for (alpha = 0; alpha < 10; alpha++)
	{
		char ch = 'a';
		/*enter nested loop*/
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
	}
}
