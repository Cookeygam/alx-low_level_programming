#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int nml, ownl, x;
	dog_t *dog;

	dog = malloc(sizeof(dog_t));

	if (name == NULL || owner == NULL || dog == NULL)
		return (NULL);
	for (nml = 0; name[nml]; nml++)
		;
	nml++;
	dog->name = malloc(nml * sizeof(char));
	if (dog->name == NULL)
	{
		return (NULL);
    free(dog);
  }
	for (x = 0; x < nml; x++)
		dog->name[x] = name[x];
	dog->age = age;
	for (ownl = 0; owner[ownl]; ownl++)
		;
	ownl++;
	dog->owner = malloc(ol * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (x = 0; x < ownl; x++)
		dog->owner[x] = owner[x];
	return (dog);
}
