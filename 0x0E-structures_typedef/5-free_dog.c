#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - function to free memory from dogs!
 * @d: pointer to struct dog
 * Return: Nothing
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
