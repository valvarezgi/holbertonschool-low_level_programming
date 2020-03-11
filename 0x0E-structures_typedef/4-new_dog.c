#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - creates a new dog
 * @name: name of a new dog
 * @age: age of a new dog
 * @owner: owner of a new dog
 * Return: new dog structure
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newone;

	newone = malloc(sizeof(dog_t));
	if (newone == NULL)
	{
		free(newone);
		return (NULL);
	}
	if (name == NULL || owner == NULL)
	{
		free(newone);
		return (NULL);
	}
	(*newone).name = name;
	(*newone).age = age;
	(*newone).owner = owner;
	return (newone);
}
