#include <stdlib.h>
#include "main.h"
/**
 * array_range - creates array
 * @min: minimum range
 * @max: maximum range
 * Return: pointer to the array
 */
int *array_range(int min, int max)
{
	int *ptr, i, size;
	/*variables*/
	if (min > max)
		return (NULL);
	size = max - min + 1;
	ptr = malloc(size * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
	       ptr[i] = min++;
	return (ptr);	
}
