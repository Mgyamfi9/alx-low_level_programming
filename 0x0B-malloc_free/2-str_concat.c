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
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	/*variable declaration*/
	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;
	ptr = malloc(sizeof(char) * (len1 + len2 + 1));
	if (ptr == NULL)
		return (NULL);
	if (s1)
	{
		while (i < len1)
		{
			ptr[i] = s1[i];
			i++;
		}
	}
	if (s2)
	{
		while (i < (len1 + len2))
		{
			ptr[i] = s2[j];
			i++;
			j++;
		}
	}
	ptr[i] = '\0';
	return (ptr);
}
