#include "main.h"
/**
 * get_bit - returns the value of a bit
 * @n: bit number
 * @index: index of the bit
 * Return: value of the bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	unsigned long int i_val = 1UL << index;

	return ((n & i_val) != 0);
}
