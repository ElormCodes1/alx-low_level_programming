#include "dog.h"
#include <stdio.h>
/**
 * print_dog - prints struct dog
 * @d: pointer to struct dog
 */
void print_dog(struct dog *d)
{
	if (d.name || d.age || d.owner == NULL)
		printf("(nil)");
	if (d != NULL)
		printf("%d\n%d\n%d\n",d.name,d.age,d.owner);
}


