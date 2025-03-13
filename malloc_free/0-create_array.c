#include <stdlib.h>
#include "main.h"
/**
 * create_array - ...
 * @size: c'est la taille de la liste
 * @c: caractère a répéter dans le tableau
 * Return: ...
 */
char *create_array(unsigned int size, char c)
{
	unsigned int itteration;
	char *ptr;

	if (size < 2)
	{
		return (NULL);
	}
	ptr = malloc(size * sizeof(c));
	if (ptr == NULL)
	{
		return (NULL);
	}

	itteration = 0;

	while (itteration < size)
	{
		ptr[itteration] = c;
		itteration++;
	}

	ptr[itteration] = '\0';

	return (ptr);
}
