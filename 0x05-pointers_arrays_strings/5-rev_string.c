#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * rev_string - reverses a string
 * @s: string to reverse
 */
void rev_string(char *s)
{
	if (s == NULL)
		return;
	else
	{
		int length = strlen(s);
		int i;
		/*variable declarations*/
		for (i = length -1; i >= 0; i--)
		{
			_putchar(s[i]);
		}
	}
}
