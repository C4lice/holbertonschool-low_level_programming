#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - pour retourner un tableau bidimensionnel
 * @width: nombre de lignes
 * @height: nombre de colonnes
 * Return: ...
 */
int **alloc_grid(int width, int height)
{
	int itteration = 0;
	int j = 0;
	int **ptr;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}
	ptr = malloc(height * sizeof(int *));

	if (ptr == NULL)
	{
		return (NULL);
	}
	while (itteration < height)
	{
		ptr[itteration] = malloc(width * sizeof(int));
		if (ptr[itteration] == NULL)
		{
			for (; j < itteration; j++)
			{
				free(ptr[j]);
			}
			free(ptr);
			return (NULL);
		}
		itteration++;
	}
	for (itteration = 0; itteration < height; itteration++)
	{
		for (j = 0; j < width; j++)
		{
			ptr[itteration][j] = 0;
		}
	}
	return (ptr);
}
