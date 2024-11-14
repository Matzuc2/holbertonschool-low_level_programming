#include "dog.h"
/**
*init_dog - initialiazes a struct dog
*@d: pointer to struct d
*@name: pointer to name
*@age: age variable passée par valeur
*@owner: name of dog's owner
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
