#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _strcat - pointer function to concatenate strings
 * @dest: dest string
 * @src: src string
 * Return: strcat(desc,src)
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
