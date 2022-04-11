#include <stdio.h>
#include "dog.h"
/**
 * print_dog - prints the dog structure
 * @d: the dog instance
 *
 * Return: Always 0
 *
 */
void print_dog(struct dog *d)
{
	if (d->age == NULL || d->owner == NULL)
	{
		printf("%s", "nil");
	}
	if (d->name == NULL)
	{
		printf("Name(%s)", "nil");
	}
	printf("name: %s\n", d->name);
	printf("age: %d\n", d->age);
	printf("owner: %s\n", d->owner);
}
