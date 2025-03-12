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
	char *liste_final;

	if (size == 0)
	{
		return (NULL);
	}
	liste_final = malloc(sizeof(char) * size);
	for (itteration = 0 ; itteration <= size ; itteration++)
	{
		liste_final[itteration] = c;
	}
	return (liste_final);
}
