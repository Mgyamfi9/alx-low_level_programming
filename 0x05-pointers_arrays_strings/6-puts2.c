#include "main.h"
#include <stdio.h>
/**
 * puts2 - prints every other character of a string
 * @str: input string
 */
void puts2(char *str)
{
	int i = 0;
	/*variables*/
	if (str == NULL)
		return;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}