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
	int len1;
	int len2;
	int i;
	int j;

	for (len1 = 0; name[len1] != '\0'; len1++)
	{
	}
	len1++;
	for (len2 = 0; owner[len2] != '\0'; len2++)
	{
	}
	len2++;
	p = malloc(sizeof(dog_t));
	if (p == NULL)
		return (NULL);
	(*p).name = malloc(sizeof(char) * len1);
	if ((*p).name == NULL)
		return (NULL);
	for (i = 0; i < len1 || (*p).name[i] != '\0'; i++)
	{
		(*p).name[i] = name[i];
	}
	(*p).name[i] = '\0';
	(*p).age = age;
	(*p).owner = malloc(sizeof(char) * len2);
	if ((*p).owner == NULL)
		return (NULL);
	for (j = 0; i < len2 || (*p).owner[j] != '\0'; j++)
	{
		(*p).owner[j] = owner[j];
	}
	(*p).owner[j] = '\0';
	return (p);

}

