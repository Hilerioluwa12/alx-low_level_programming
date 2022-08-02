#ifndef _DOG_H
#define _DOG_H

/**
 * init_dog - initialize a variable of type struct dog
 * @d: struct dog
 * @name: the dog name
 * @age: the dog age
 * @owner:the owner name
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		(*d).age = age;
		d->owner = owner;
	}
}
