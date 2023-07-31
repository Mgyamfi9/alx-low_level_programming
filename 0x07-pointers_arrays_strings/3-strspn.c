#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strspn - getss the length of a prefix substring
 * @s: pointer segment 
 * @accept: lenght of prefix
 * Return: strspn(s,accept) lenght of substring
 */
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
