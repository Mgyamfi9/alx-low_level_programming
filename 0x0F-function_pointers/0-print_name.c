#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - prints name using pointer
 * @name: name to print
 * @f: pointer to the function
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
