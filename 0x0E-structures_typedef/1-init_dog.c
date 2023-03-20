#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * init_dog - Initialie a variable of type struct dog
 * @d: The struct dog variable
 * @name: Element
 * @age: Element 2
 * @owner: Element 3
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
