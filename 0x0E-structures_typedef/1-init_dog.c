#include "main.h"
/**
 * init_dog - Initializes a dog structure with the given values
 * @d: Pointer to the dog structure to be initialized
 * @name: Pointer to the name of the dog
 * @age: Age of the dog
 * @owner: Pointer to the name of the dog's owner
 *
 * Description: This function initializes the name, age, and owner fields of
 * a dog structure with the given values.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
