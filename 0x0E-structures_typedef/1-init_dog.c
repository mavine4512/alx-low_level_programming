#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Function that initialize a variable of type struct dog
 * @d: Struct dog to initialize
 * @name: dog name to initialize
 * @age: dog age to initialize
 * @owner: dog owner to initialize
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
