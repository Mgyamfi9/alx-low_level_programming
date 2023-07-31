#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _strchr - locates a character in a string
 * @s: string to locate letter
 * @c: character to locate
 * Return: strchr(s, c) locates character in a string
 */  
char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
