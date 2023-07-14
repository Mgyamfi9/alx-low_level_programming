#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int tens_digit1;
	int ones_digit1;
	int tens_digit2;
	int ones_digit2;
	/* Print combinations of two two-digit numbers */
	for (tens_digit1 = 0; tens_digit1 < 10; tens_digit1++)
	{
		for (ones_digit1 = 0; ones_digit1 < 10; ones_digit1++)
		{
			for (tens_digit2 = tens_digit1; tens_digit2 < 10; tens_digit2++)
			{
				int start_digit = (tens_digit1 == tens_digit2) ? ones_digit1 + 1 : 0;
				for (ones_digit2 = start_digit; ones_digit2 < 10; ones_digit2++)
				{
					putchar('0' + tens_digit1);
					putchar('0' + ones_digit1);
					putchar(' ');
					putchar('0' + tens_digit2);
					putchar('0' + ones_digit2);
					if (tens_digit1 != 9 || ones_digit1 != 8 || tens_digit2 != 9 || ones_digit2 != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
