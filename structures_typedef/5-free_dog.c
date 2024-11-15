#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
*free_dog - dont abandon your dog bro
*@d: pointeur vers d
*/

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
