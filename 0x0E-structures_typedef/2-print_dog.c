#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - prints dog props
 * @d:dog ponter
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	printf("Name: %s\n", d->name ? d->name : "nil");
	printf("Age: %6f\n", d->age);
	printf("Owner: %s\n", d->owner ? d->owner : "nil");
}
