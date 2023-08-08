#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * create_array - creates array of char
 * @size: size of array
 * @c: character to initialize array with
 * Return: 0 always success
 */
char *create_array(unsigned int size, char c)
{
	char *array = malloc(size * sizeof(char));
	unsigned int i;
	/*variable declarations*/
	if (size == 0)
		return (NULL);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
