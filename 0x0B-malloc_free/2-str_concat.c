#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenates string
 * @s1: src 
 * @s2: desetination
 * Return: 0 always success
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	/*variable declaration*/
	*ptr = strcat(s1, s2); 
	char *str = malloc(ptr * sizeof(char));
	return (str);
	if (str == NULL)
		return (NULL); 
}
