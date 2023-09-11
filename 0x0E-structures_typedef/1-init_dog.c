#include <stdio.h>
#include "dog.h"

/**
 * struct dog - new stuct type,.
 * init_dog- initialize a variable of type struct dog.
 * @d: description
 * @name: variable name.
 * @age: varaile age.
 * @owner: variable owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
