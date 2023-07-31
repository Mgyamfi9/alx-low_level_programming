#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - prints diagonal sums
 * @a: pointer array
 * @size: array size
 */
void print_diagsums(int *a, int size)
{
	int main_diagonal_sum, secondary_diagonal_sum, i;
	/*variable declarations*/
	main_diagonal_sum = 0;
	secondary_diagonal_sum = 0;
	for (i = 0; i < size; i++)
	{
		main_diagonal_sum += a[i * size + i];
	}
	for (i = 0; i < size; i++)
	{
		secondary_diagonal_sum += a[i * size + (size - 1 - i)];
	}
	printf("%d, %d\n", main_diagonal_sum, secondary_diagonal_sum);
}

