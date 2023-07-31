#include <stdio.h>
#include "main.h"
/**
 * print_chessboard - prints chessboard
 * @a: The character to print
 * 
 */
void print_chessboard(char (*a)[8])
{
	int i, j;
	/*variable declarations*/
	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
			_putchar(' ');
		}
		_putchar('\n');
	}
}