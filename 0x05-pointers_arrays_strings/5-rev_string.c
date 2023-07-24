#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * rev_string - reverses a string
 * @s: string to reverse
 */
void rev_string(char *s)
{
	 int i;
        /*variable*/	 
        for (i = strlen(s) - 1; i >= 0; i--)
        {
                _putchar(s[i]);
        }
}
