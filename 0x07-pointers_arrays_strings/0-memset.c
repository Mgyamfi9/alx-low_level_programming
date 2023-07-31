#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _memset - pointer function to fill memory
 * @s: pointer to the copy char
 * @b: character to copy
 * @n: number of bytes to copy
 * Return: memset(s, b, n)
 */
char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
