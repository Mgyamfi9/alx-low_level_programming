#include "main.h"
#include <ctype.h>
/**
 * _isupper - checks uppercase
 * @c: value to check
 * Return: 1 if uppercase
 */
int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
