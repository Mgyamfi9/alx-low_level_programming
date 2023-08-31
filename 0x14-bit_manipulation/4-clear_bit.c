#include "main.h"
/**
 * clear_bit - sets bit value to 0
 * @n: pointer to the bit
 * @index: index of bit
 * Return: 1 on success
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int size = sizeof(n) * 8;

	if (index >= size)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
