#include"main.h"
#include "strlen.c"
#include <stdio.h>
/**
 * _strstr - regarde dans un tableau pour voir
 *s'il y a une chaîne dans ce tableau
 * @haystack: le tableau à consulter
 * @needle: la chaîne à rechercher
 * Return: ...
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (haystack == NULL || needle == NULL)
	{
		return (NULL);
	}

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
		}
		if (needle[j] == '\0')
		{
			return (haystack + i);
		}
	}

	return (NULL);
}
