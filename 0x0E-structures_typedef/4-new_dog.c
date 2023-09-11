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
	char *n;
	char *o;

	p = malloc(sizeof(dog_t));
	if (p == NULL)
		return (NULL);
	p->name = name;
	p->age = age;
	p->owner = owner;
	n = malloc(sizeof(p->name));
	if (n == NULL)
		return (NULL);
	n = name;
	o = malloc(sizeof(p->owner));
	if (o == NULL)
		return (NULL);
	o = owner;
	return (p);
}
