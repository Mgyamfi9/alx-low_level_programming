#include <stdlib.h>
#include "main.h"
/**
 * _realloc - reallocates memory
 * @ptr: pointer to old memory
 * @old_size: size of ptr
 * @new_size: new size
 * Return: ptr to new memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	int *new_ptr;
	/*variables*/
	for (i = 0; i < old_size; i++)
		ptr[i] = i + 1;
	new_ptr = (int *)realloc(ptr, new_size * sizeof(int));
	if (new_ptr == NULL)
	{
		free(ptr);
		return (1);
	}
	for (i = old_size; i < new_size; i++)
		new_ptr[i] = i + 1;
	free(new_ptr);
	return (0);
}
