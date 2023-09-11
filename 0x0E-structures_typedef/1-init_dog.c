#include "dog.h"
/**
 * init_dog - intialize the variables of dog struct
 * @d: pointer to struct
 * @name: name of dog
 * @age: age of the dog
 * @owner: name of the owner of the dog
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).owner = owner;
	(*d).age = age;
}
