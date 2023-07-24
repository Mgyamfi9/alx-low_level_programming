#include <string.h>
#include "main.h"
/**
 * _strcpy - copies the string pointed to by src to dest
 * @dest: destination to copy to
 * @src: destination to copy from
 * Return: strcpy(dest, src) success
 */
char *_strcpy(char *dest, char *src)
{
	if (src == NULL || dest == NULL)
		return NULL;
	return strcpy(dest, src);
}
