#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize struct with
 * data passed
 * @d: pointer to struct
 * @name: name var
 * @age: age var
 * @owner: owner var
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *e;

	e = d;

	e->name = name;
	e->age = age;
	e->owner = owner;

}

