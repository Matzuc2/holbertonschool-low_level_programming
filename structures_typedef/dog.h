#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Structure for dogs
 * @name: Pointer to the dog's name (string)
 * @age: Age of the dog (float)
 * @owner: Pointer to the owner's name (string)
 *
 * Description: This structure represents information about a dog,
 * including its name, age, and owner's name.
 */

typedef struct dog
{
	char *name;

	float age;

	char *owner;
} dog_t;
void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
