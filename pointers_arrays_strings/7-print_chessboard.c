#include"main.h"
#include "strlen.c"
#include <stdio.h>
/**
 * print_chessboard - imprimer un échiquier
 * @a: le tableau des données d'échecs
 * Return: ...
 */
void print_chessboard(char (*a)[8])
{
	int row, column;

	for (row = 0; row < 8 ; row++)
	{
		for (column = 0 ; column < 8 ; column++)
		{
			_putchar (a[row][column]);
		}
		_putchar('\n');
	}
}
