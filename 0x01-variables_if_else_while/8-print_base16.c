#include <stdio.h>
#include "main.h"
/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	/* Print numbers 0 to 9 */
	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);
	}
	/* Print lowercase letters a to f */
	for (i = 0; i < 6; i++)
	{
		putchar('a' + i);
	}
	/*adding new line and returning*/
	putchar('\n');
	return (0);
}
