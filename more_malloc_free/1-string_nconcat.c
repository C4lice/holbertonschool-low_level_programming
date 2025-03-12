#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * string_nconcat - concaténer une chaîne de
 * caractères avec une partie d'une autre chaîne de caractères
 * @s1: pour allouer l'intégralité de char
 * @s2: d'allouer totalement ou partiellement char
 * @n: longueur à conserver pour le retour
 * Return: concaténé char
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int itteration, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (itteration = 0; s1[itteration]; itteration++)
	{}
	for (j = 0; j < n; j++)
	{}
	str = malloc(itteration + j + 1 * sizeof(char));
	if (str == NULL)
		return (NULL);

	for (itteration = 0; s1[itteration]; itteration++)
	{
		str[itteration] = s1[itteration];
	}
	for (j = 0; j < n; j++)
	{
		str[itteration] = s2[j];
		itteration++;
	}
	str[itteration] = '\0';
	return (str);
}