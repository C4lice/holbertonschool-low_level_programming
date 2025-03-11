#include <stdlib.h>
#include "main.h"
/**
 * _strdup - pour dupliquer une chaîne de caractères avec malloc
 *@str: char à dupliquer
 *Return: ...
 */
char *_strdup(char *str)
{
	unsigned int itteration = 0;
	char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[itteration] != '\0')
	{
		itteration++;
	}
	ptr = malloc(itteration + 1 * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}

	itteration = 0;

	while (str[itteration] != '\0')
	{
		ptr[itteration] = str[itteration];
		itteration++;
	}

	ptr[itteration] = '\0';

	return (ptr);
}