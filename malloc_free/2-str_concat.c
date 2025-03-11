#include <stdlib.h>
#include "main.h"
/**
 * str_concat - pour concaténer deux chaînes de caractères avec allocation dynamique
 * @s1: char pour concaténer
 * @s2: char pour concaténer
 * Return: ...
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int itteration = 0;
	unsigned int j = 0;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[itteration] != '\0')
	{
		itteration++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	ptr = malloc((itteration + j + 1) * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	itteration = 0;
	while (s1[itteration] != '\0')
	{
		ptr[itteration] = s1[itteration];
		itteration++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		ptr[itteration] = s2[j];
		j++;
		itteration++;
	}
	ptr[itteration] = '\0';
	return (ptr);
}