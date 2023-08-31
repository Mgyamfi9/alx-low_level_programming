#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at index
 * @n: pointer to the bit
 * @index: index of bit
 * Return: 1 on success
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int size = sizeof(n) * 8;
	/*variable*/
	if (index >= size)
		return (-1);
	*n |= (1UL << index);
	/*set bit at index to 1*/
	return (1);
}
