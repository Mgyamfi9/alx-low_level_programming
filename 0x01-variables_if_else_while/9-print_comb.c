#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	/* Print single-digit numbers */
	for (i = 0; i < 10; i++)
	{
		/*printing 0 to 9*/
		putchar('0' + i);
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	/*returning values*/
	putchar('\n');
	return (0);
}
