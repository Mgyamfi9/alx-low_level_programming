#include "main.h"
#include <stdio.h>
/**
 * swap_int - swaps the integers
 * @a: first pointer value
 * @b: second pointer value
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
