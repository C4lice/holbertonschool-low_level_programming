#include "main.h"
/**
 * _strcmp - ...
 * @s1: premier string a comparer
 * @s2: deuxieme string a comparer
 * Return: ...
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (*(s1 + i) == *(s2 + i) && *(s1 + i) != '\0' && *(s2 + i) != '\0')
		i++;

	return (*(s1 + i) - *(s2 + i));
}
