#include"main.h"
#include "strlen.c"
#include <stdio.h>
/**
 * _strpbrk - regarder dans un tableau pour voir
 * s'il y a un caractère dans liste
 * @s: le tableau à consulter
 * @accept: the array of character to look
 *
 * Return: ...
 */
char *_strpbrk(char *s, char *accept)
{
	int sec_i, length_acc;

	length_acc = _strlen(accept);
	for (; *s ; s++)
	{
		for (sec_i = 0 ; sec_i < length_acc ; sec_i++)
		{
			if (*s == accept[sec_i])
			{
				return (s);
			}
		}
	}
	return ('\0');
}
