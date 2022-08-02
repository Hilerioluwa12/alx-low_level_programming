#include "dog.h"
#include <stdlib.h>

/**
 * _strdup - duplicate a string
 * @str: string
 *
 * Return: pointer to newely allocated space in memory
 */

char *_strdup(char *str)
{
	char *str1;
	int i, j;

	if (str == NULL)
	{
	return (NULL);
	}
	for (i = 0; str[i]; i++)
	{
		;
	}
	i++;
	str1 = malloc(sizeof(char) * i);

	if (str1 == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < i; j++)
	str1[j] = str[j];

	return (str1);
}
/**
 * new_dog - a function that creates a new dog.
 * @name: the dog name
 * @age: the dog age
 * @owner: the dog owne
 * Return: struct dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));
	if (name == NULL || owner == NULL)
	return (NULL);

	if (new_dog == NULL)
	return (NULL);

	new_dog->name = _strdup(name);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->age = age;

	new_dog->owner = _strdup(owner);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	return (new_dog);
}
