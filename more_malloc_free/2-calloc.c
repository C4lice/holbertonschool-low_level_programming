#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * _calloc - pour allouer de la mémoire à un tableau
 * @nmemb: hauteur du tableau
 * @size: taille à allouer par nmemb
 * Return: une mémoire d'allocation à un tableau
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *str;
	unsigned int itteration = 0;

	if (nmemb == 0)
		return (NULL);
	if (size == 0)
		return (NULL);
	str = malloc(nmemb * size);
	if (str == NULL)
		return (NULL);
	for (; itteration < nmemb * size; itteration++)
		str[itteration] = 0;

	return (str);
}