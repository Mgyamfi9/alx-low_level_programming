#include "main.h"
/**
 * flip_bits - number of bits needed to flip
 * @n: number
 * @m: destination number
 * Return: number of flips
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i = 0;
	unsigned int flips = 0;
	unsigned long int k = sizeof(unsigned long int) * 8;

	for (i = 0; i < k; i++)
	{
		if ((m & 1) != (n & 1))
			flips += 1;
		n = n >> 1;
		m = m >> 1;
	}
	return (flips);
}
