#include <stdio.h>
/**
 * func - executed first
 */
void __attribute__((constructor)) func(void)
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}
