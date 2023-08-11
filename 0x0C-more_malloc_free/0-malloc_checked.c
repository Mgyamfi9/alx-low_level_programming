#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * malloc_checked - allocates memory
 * @b: integer b
 */
void *malloc_checked(unsigned int b)
{
	int *arr = malloc(b);
	if (arr == NULL)
		exit (98);
	return (arr);
}
