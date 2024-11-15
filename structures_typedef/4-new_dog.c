#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
*new_dog - create a new dog with dynamic allocation
*@name: create a new dog name
*@age: create new dog age
*@owner: define new dog owner
*Return: return the new dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;
	int len1 = 0, len2 = 0, i, j;

	if (name == NULL || owner == NULL || age < 0)
		return (NULL);
	if (*name == '\0'  || *owner == '\0')
		return (NULL);
	while (name[len1] != '\0')
		len1++;
	len1++;
	while (owner[len2] != '\0')
		len2++;
	len2++;
	p = malloc(sizeof(dog_t));
	if (p == NULL)
		return (NULL);
	(*p).name = malloc(sizeof(char) * len1);
	if ((*p).name == NULL)
	{
		free(p);
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		(*p).name[i] = name[i];
	}
	(*p).age = age;
	(*p).owner = malloc(sizeof(char) * len2);
	if ((*p).owner == NULL)
	{
		free((*p).name);
		free(p);
		return (NULL);
	}
	for (j = 0; j < len2; j++)
		(*p).owner[j] = owner[j];
	return (p);

}


