#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - pour allouer de la mémoire à l'aide de malloc
 * @b: taille de l'allocation de mémoire
 * Return: pointeur pour allouer de la mémoire
 */
void *malloc_checked(unsigned int b)
{
	char *str;

	str = malloc(b * sizeof(char));
	if (str == NULL)
		exit(98);
	return (str);
}
