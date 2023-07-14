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
	for (ch = 97; ch <= 120; ch++)
	{
		putchar(ch);
		for (ch = 65; ch <= 90; ch++)
		{
			putchar(ch);
		}
		/*after looping*/
		return (0);
	}
	/*after code runs*/
	putchar('\n');
	return (0);
}
