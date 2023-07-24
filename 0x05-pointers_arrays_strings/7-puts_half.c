#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts_half - prints the second half of a string, followed by a new line
 * @str: input string
 */
void puts_half(char *str)
{
	int length = strlen(str);
	int start_index;
	/*variables*/
	if (str == NULL)
		return;
	if (length % 2 == 0)
	{
		start_index = length / 2;
	}
	else
	{
		start_index = (length - 1) / 2;
	}
	for (int i = start_index; i < length; i++) {
		_putchar(str[i]);
	}
	_putchar('\n');
}
