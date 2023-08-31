#include "main.h"
/**
 * binary_to_uint - converts binary to int
 * @b: pointer to string of chars
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num;
	int i;
	/*variables*/
	num = 0;
	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0' || b[i] == '1')
			num = num * 2 + (b[i] - '0');
		else
			return (0);
	}
	return (num);
}
