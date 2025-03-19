#include <stdlib.h>
#include "function_pointers.h"

/**
 *array_iterator - itération du tableau
 *@array: tableau de pointeurs
 *@size: taille du tableau
 *@action: appeler la fonction de pointeur
 *return: ...
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL)
		exit(-1);

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
