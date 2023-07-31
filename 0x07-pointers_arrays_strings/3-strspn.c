#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strspn - gets the length of a substring
 * @s: pointer segment 
 * @accept: lenght of prefix
 * Return: strspn(s,accept)
 */
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
