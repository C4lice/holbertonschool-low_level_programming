#include "main.h"
/**
 * _memset - fonction
 * @s: tableau à modifier
 * @b: le caractere a remplacer dans le tableau
 * @n: le nombre de temps pour le remplacer
 * Return: ...
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		s[i] = b;
	}
	return (s);
}
