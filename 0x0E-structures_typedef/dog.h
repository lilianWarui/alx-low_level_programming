#ifndef dog_h
#define dog_h
/**
 * struct dog -has dog details
 * @name: name
 * @age: age
 * @owner: owner
 *
 * this struct keeps dog's info
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
#include <stdio.h>
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void print_dog(struct dog *d);

#endif
