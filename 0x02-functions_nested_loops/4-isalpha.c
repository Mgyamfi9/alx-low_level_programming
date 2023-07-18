#include "main.h"
/**
 * _isalpha - checks if its lowercase.
 *@c: characters to check
 * Return: 1 if c is a letter.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
