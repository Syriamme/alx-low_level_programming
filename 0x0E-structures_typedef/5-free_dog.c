#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Struct to be free'd
 * @d: Adress of the struct
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	if (d->name)
		free(d->name);
	if (d->owner)
		free(d->owner);
	free(d);
}

