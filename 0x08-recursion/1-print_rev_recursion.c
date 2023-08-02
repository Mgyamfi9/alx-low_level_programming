#include "main.h"
/**
 * _print_rev_recursion - prints a string in reverse
 * @s: string to print
 */
void _print_rev_recursion(char *s)
{
	char rev = s[0];
	int counter = 0;
	int i;
	/*variables*/
	while (s[counter] != '\0')
		counter++;
	for (i = 0; i < counter; i++)
	{
		counter--;
		rev = s[i];
		s[i] = s[counter];
		s[counter] = rev;
	}
}
