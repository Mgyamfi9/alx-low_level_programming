#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * string_nconcat - concatenates string
 * @s1: character variable
 * @s2: second character variable
 * Return: 0 always success
 */ 
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int len1, len2, concatlen, n;
	/*variables*/
	len1 = strlen(s1);
	len2 = strlen(s2);
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	concatlen = len1 + (n < len2 ? n : len2) + 1;
	char *res = (char *)malloc(concatlen);
	if (result == NULL)
		return (NULL);
	strcpy(result, s1);
	strncat(result, s2, n < len2 ? n : len2);
	result [concatlen - 1] = '\0';
	return (result);
}
