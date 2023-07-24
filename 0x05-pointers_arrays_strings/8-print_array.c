#include <stdio.h>
#include "main.h"
/**
 * print_array - prints n elements of an array
 * @a: pointer to the array
 * @n: number of elements to be printed
 */
void print_array(int *a, int n)
{
	int i;
	/*variable*/
	if (a == NULL || n <= 0)
		return;
	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
