#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializes a variable of struct dog
 * @d: struct name
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Description: gives data about dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
