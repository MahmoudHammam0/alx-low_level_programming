#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - creates a new dog.
 * @name: dog name
 * @age: dog age
 * @owner: dog owner name
 * Return: pointer to struct dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;

	p = malloc(sizeof(dog_t));
	if (p == NULL)
		return (NULL);
	p->name = name;
	p->age = age;
	p->owner = owner;
	return (p);
}
