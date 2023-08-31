#include "main.h"
/**
 * get_bit - returns the value of a bit
 * @n: bit number
 * @index: index of the bit
 * Return: value of the bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int b;

	b = (n >> index);
	if (index >= sizeof(n) * 8)
		return (-1);
	return (b & 1);
}
