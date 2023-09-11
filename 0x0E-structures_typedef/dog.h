#ifndef dog_h
#define dog_h

/**
 * struct dog - structer type for dog.
 * @name: name of dog
 * @age: age of dog.
 * @owner: owner of dog.
 *
 * Description: Attributes of a dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
