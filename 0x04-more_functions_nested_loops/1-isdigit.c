#include "main.h"
/**
 * _isdigit - checks if it is a digit
 * @c: value to check
 * Return: 1 if it is a digit
 */
int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
