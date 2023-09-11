#include "dog.h"
#include <string.h>
#include <stdlib.h>

/**
 * new_dog - creates new dog.
 * @name:name of new dog.
 * @age: age of new dog.
 * @owner: owner of new dog.
 *
 * Return: null if fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog = (dog_t *)malloc(sizeof(dog_t));

	if (newDog == NULL)
	{
		return (NULL);
	}
	newDog->name = (char *)malloc(strlen(name) + 1);
	newDog->owner = (char *)malloc(strlen(owner) + 1);
	if (newDog->name == NULL || newDog->owner == NULL)
	{
		free(newDog->name);
		free(newDog->owner);
		free(newDog);
		return (NULL);
	}
	strcpy(newDog->name, name);
	newDog->age = age;
	strcpy(newDog->owner, owner);

	return (newDog);
}
