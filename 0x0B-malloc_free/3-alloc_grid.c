#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2dimensional array
 * @width: width of array
 * @height: height of array
 * Return: pointer to the array
 */
int **alloc_grid(int width, int height)
{
	int w;
	int h;
	int **array;
	/*variable declarations*/
	if (height <= 0 || width <= 0)
               return (NULL);
	array = (int **) malloc(sizeof(int *) * height);
	if (array == NULL)
		return (NULL);
	for (w = 0; w < height; w++)
	{
		array[i] = (int *) malloc(sizeof(int) * width);
		if (arrray[i] == NULL)
		{
			free(array);
			for (h = 0; h <= w; h++)
				free(arr[h]);
			return (NULL);
		}
	}
	for (w = 0; w < height; w++)
	{
		for (h = 0; h < width; h++)
		{
			array[w][h] = 0;
		}
	}
	return (array);
}
