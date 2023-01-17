#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int nil, ol, x;
	dog_t *dog;
  
  dog = malloc(sizeof(dog_t));
	if (name == NULL || owner == NULL || dog == NULL)
		return (NULL);
	for (nil = 0; name[nil]; nil++)
		;
	nil++;
	dog->name = malloc(nil * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (x = 0; x < nl; x++)
		dog->name[x] = name[x];
	dog->age = age;
	for (ol = 0; owner[ol]; ol++)
		;
	ol++;
	dog->owner = malloc(ol * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (x = 0; x < ol; x++)
		dog->owner[x] = owner[x];
	return (dog);
}
