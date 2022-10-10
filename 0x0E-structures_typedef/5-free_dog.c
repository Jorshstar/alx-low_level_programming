#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - A function that frees memory of dog
 * @d: A function that points to dog
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name)
			free(d->name);
		if (d->owner)
			free(d->owner);
		free(d);
	}
}
