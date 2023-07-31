#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _memcpy - copies memory area
 * @dest: destination to copy to
 * @src: destination to copy from
 * @n: bytes to copy
 * Return: memcpy(dest, src, n) pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
