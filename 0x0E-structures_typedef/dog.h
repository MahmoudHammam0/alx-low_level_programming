#ifndef DOG_H
#define DOG_H
/**
 * struct dog - contain dog info
 * @name: dog name
 * @owner: dog owner name
 * @age: dog age
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
