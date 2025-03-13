#include <stdlib.h>
#include "dog.h"
/**
 * dog_t *new_dog - pour créer un nouveau chien
 *@name: char à mettre à jour dans d->name
 *@age: âge à mettre à jour dans d->age
 *@owner: char à mettre à jour dans d->owner
 *Return: ...
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int itteration, j;
	dog_t *new_dog;

	if (name == NULL || owner == NULL)
		return (NULL);

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	for (itteration = 0; name[itteration]; itteration++)
	{}
	new_dog->name = malloc(itteration + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	for (j = 0; owner[j]; j++)
	{}
	new_dog->owner = malloc(j + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	for (itteration = 0; name[itteration]; itteration++)
		new_dog->name[itteration] = name[itteration];
	new_dog->name[itteration++] = '\0';

	for (j = 0; owner[j]; j++)
		new_dog->owner[j] = owner[j];
	new_dog->owner[j++] = '\0';
	new_dog->age = age;

	return (new_dog);
}
