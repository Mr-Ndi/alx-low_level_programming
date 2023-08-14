#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - frees memory allocated to the element of dog
 * @d: struct dog
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
