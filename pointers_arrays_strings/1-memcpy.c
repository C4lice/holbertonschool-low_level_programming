#include "main.h"
/**
 * _memcpy - remplace la n première valeur d'une liste de tableaux par une valeur
 * @dest: le tableau à modifier
 * @src: utilisation du tableau pour le remplacer dans le tableau
 * @n: nombre de temps pour remplacer
 * Return: ...
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	for (i = 0 ; i < n ; i++)
	{
		 dest[i] = src[i];
	}
	return (dest);
}
