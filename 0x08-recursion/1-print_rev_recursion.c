#include "main.h"
/**
 * _print_rev_recursion - prints a string in reverse
 * @s: string to print
 */
void _print_rev_recursion(char *s)
{
	int l, c;
	char *b, *e, t;
	/*variables*/
	l = strlen(s);
	b = s;
	e = s;
	for (c = 0; c < l - 1; c++)
		e++;
	for (c = 0; c < l / 2; c++)
	{
		t = *e;
		*e = *b;
		*b = t;
		b++;
		e--;
	}
}
