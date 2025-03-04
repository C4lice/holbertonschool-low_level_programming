#include"main.h"
#include <stdlib.h>
/**
 * _strchr - regarde dans un tableau pour voir s'il y a un caractère donné
 * @s: le tableau à consulter
 * @c: le caractère à regarder
 * Return: ...
 */
char *_strchr(char *s, char c)
{
	for (; *s ; s++)
	{
		if (*s == c)
		{
			return (s);
		}
	}
	if (c != '\0')
		return ('\0');
	return (s);
}
