#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _strncpy - copies a string
 * @dest: destination to copy to
 * @src: source to copy from
 * @n : bytes to copy
 * Return: dest as string
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
