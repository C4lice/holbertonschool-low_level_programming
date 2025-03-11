#include <stdlib.h>
#include "main.h"
/**
 *free_grid - pour libérer un tableau bidimensionnel
 *@grid: pointeur du tableau à libérer
 *@height: nombre de lignes
 *Return: ...
 */
void free_grid(int **grid, int height)
{
	int itteration;

	for (itteration = 0; itteration < height; itteration++)
	{
		free(grid[itteration]);
	}
	free(grid);
}