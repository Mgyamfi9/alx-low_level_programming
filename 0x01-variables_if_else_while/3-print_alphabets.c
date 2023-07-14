#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 'a';
	int alpha=65
	/*declaring ch*/
	while (ch <= 'z' && alpha <= 90)
	{
		putchar(ch);
		putchar(alpha)
		ch++;
		alpha++;
	}
	/*adding new line*/
	putchar('$\n');
	/*returning 0*/
	return (0);
}
