#include <stdlib.h>
#include "function_pointers.h"
/**
 *int_index - renvoie l'emplacement de l'int
 *@array: tableau de pointeurs
 *@size: taille du tableau
 *@cmp: appeler la fonction de pointeur
 *Return: ...
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
