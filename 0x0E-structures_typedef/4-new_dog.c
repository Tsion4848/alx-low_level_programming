#include <stdio.h>
#include "main.h"
/**
 * new_dog - creates a new dog
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: dog_t type
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n_dog;
	int i, n_name, n_owner;

	n_dog = malloc(sizeof(dog_t));
	if (n_dog == NULL || !owner || !name)
	{
		free(n_dog);
		return (NULL);
	}

	for (n_name = 0 ; name[n_name] ; n_name++)
		;
	for (n_owner = 0 ; owner[n_owner] ; n_owner++)
		;

	n_dog->name = malloc(n_name + 1);
	n_dog->owner = malloc(n_owner + 1);

	if (!n_dog-> || !n_dog->owner)
	{
		free(n_dog->owner);
		free(n_dog->name);
		free(n_dog);
		return (NULL);
	}

	for (i = 0 ; i < n_name ; i++)
		n_dog->name[i] = name[i];
	n_dog->name[i] = '\0';
	n_dog->age = age;

	for (i = 0 ; i < n_owner ; i++)
		n_dog->owner[i] = owner[i];
	n_dog->owner[i] = '\0';
	return (n_dog);
}
