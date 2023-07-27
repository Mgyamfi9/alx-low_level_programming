#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _strncat - concatenates strings using n bytes
 * @dest: destination string
 * @src: source string
 * @n: bytes
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
