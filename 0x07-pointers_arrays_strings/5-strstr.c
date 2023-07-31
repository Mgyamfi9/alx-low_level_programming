#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _strstr - locates a substring
 * @needle: substring wanted
 * @haystack: where to look
 * Return: strstr(haystack,needle) located string
 */
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
