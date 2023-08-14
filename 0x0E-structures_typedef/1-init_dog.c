#include "dog.h"
#include <stdio.h>
/**
 * init_dog - function to initialize
 * @d: variable to initialize
 * @name: name variable
 * @age: age variable
 * @owner: owner variable
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d -> name = name;
		d -> age = age;
		d -> owner = owner;
	}
}
