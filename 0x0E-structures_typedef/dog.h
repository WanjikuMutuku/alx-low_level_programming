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
/**
 * dog_t - Typedef for dog structure
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
