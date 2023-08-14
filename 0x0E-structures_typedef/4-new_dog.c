#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - new function
 * @name: name of dog
 * @age: age of dog
 * owner: owner of dog
 * Return: new struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new = (dog_t *)malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);
	new -> name = name;
	new -> age = age;
	new -> owner = owner;
	return (new);
}
