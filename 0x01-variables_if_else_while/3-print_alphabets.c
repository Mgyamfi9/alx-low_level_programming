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
	int ch;
	/*looping*/
	for (ch = 97; ch <= 122; ch++)
	{
		putchar(ch);
		/*after looping*/
	}
	for (ch = 65; ch <= 90; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	/*after code runs*/
	return (0);
}
