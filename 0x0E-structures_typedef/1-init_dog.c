#include "dog.h"
/**
 * init_dog - A function that initialize a variable
 * @d: A paramater that points to struct type dog
 * @name: A paramater that points to char name's dog
 * @age: paramater for dog age
 * @owner: paramater that points to char owner's dog
 * Return: No.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
