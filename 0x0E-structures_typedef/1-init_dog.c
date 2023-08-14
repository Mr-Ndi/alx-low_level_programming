#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - function to initialise the new dog
 * @d: poointer to the new dog
 * @name: The name pf the new dog
 * @age: the age to initialize
 * @owner: te owner to initialize
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
