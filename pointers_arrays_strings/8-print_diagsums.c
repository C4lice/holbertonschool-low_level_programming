#include "main.h"
#include <stdio.h>
/**
 *print_diagsums - pour calculer la somme des éléments du tableau dans la diagonale
 *@a: tableau de caractère
 *@size: longueur du tableau
 *Return: ...
 */
void print_diagsums(int *a, int size)
{
	int i, j, k = 0;
	int first = 0;
	int second = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				first += a[k];
			}

			if (i + j == size - 1)
			{
				second += a[k];
			}
			k++;
		}
	}
	printf("%i, %i\n", first, second);
}
