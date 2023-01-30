#include "dog.h"
#include <stdio.h>
/**
 * init_dog - initializes the struct dog
 * struct dog - structure dog 
 * @name: name of the dog
 * @age: age of dog
 * @owner: name of dog owner
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
