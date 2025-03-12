#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * array_range - pour renvoyer un tableau
 * @min: taille min du tableau
 * @max: taille maximale du tableau
 * Return: ...
 */
int *array_range(int min, int max)
{
	int *array;
	int itteration;
	int j = min;

	if (min > max)
		return (NULL);
	array = malloc((max - min + 1) * sizeof(int));
	if (array == NULL)
		return (NULL);

	for (itteration = 0; itteration <= max - min; itteration++)
	{
		array[itteration] = j;
		j++;
	}

	return (array);
}