#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _strpbrk - searches a string for any set of bytes
 * @s: location of string
 * @accept: bytes to accept
 * Return: strpbrk(s,accept) searches a string
 */
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
