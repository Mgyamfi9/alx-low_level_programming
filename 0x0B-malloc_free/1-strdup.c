#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - duplicates string
 * @str: str to duplicate
 * Return: 0 always success
 */
char *_strdup(char *str)
{
	if (str == NULL)
		return (NULL);
	return (strdup(str));
}
