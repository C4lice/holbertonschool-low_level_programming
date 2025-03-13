#include <stdlib.h>
#include "dog.h"
/**
 *init_dog - pour mettre à jour une structure
 *@d: pointeur de la structure
 *@name: char à mettre à jour dans d->name
 *@age: âge à mettre à jour dans d->age
 *@owner: char à mettre à jour dans d->owner
 *Return: Il suffit de mettre à jour la jambe de force
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		if (name != NULL)
			d->name = name;
		if (owner != NULL)
			d->owner = owner;
		d->age = age;
	}
}
