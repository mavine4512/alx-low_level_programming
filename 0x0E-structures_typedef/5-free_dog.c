#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Function that frees dogs
 * @d: pointer to struct to free
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
