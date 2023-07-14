#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int hundreds_digit;
	int tens_digit;
	int ones_digit;
	/* Print different combinations of three digits */
	for (hundreds_digit = 0; hundreds_digit < 10; hundreds_digit++)
	{
		for (tens_digit = hundreds_digit + 1; tens_digit < 10; tens_digit++)
		{
			for (ones_digit = tens_digit + 1; ones_digit < 10; ones_digit++)
			{
				putchar('0' + hundreds_digit);
				putchar('0' + tens_digit);
				putchar('0' + ones_digit);
				if (hundreds_digit != 7 || tens_digit != 8 || ones_digit != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
