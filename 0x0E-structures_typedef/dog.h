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

/**
 * struct dog_t - new type.
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog.
 *
 * Description: new name for struct dog.
 */
struct dog_t
{
	char *name;
	float age;
	char *owner;
};
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
