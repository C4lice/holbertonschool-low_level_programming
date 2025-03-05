#include"main.h"
#include "strlen.c"
#include <stdio.h>
/**
 * _strspn - Retourne a la longueur la plus grande chaîne de caractères
 * contenant uniquement
 * * caractères spécifiés dans la liste des caractères acceptés
 * @s: le tableau à consulter
 * @accept: le caractère à accepter
 *
 * Return: ...
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, length, sec_i, length_acce, check = 0;
	unsigned int count = 0;

	length = _strlen(s);
	length_acce = _strlen(accept);
	for (i = 0 ; i < length ; i++)
	{
		for (sec_i = 0 ; sec_i < length_acce ; sec_i++)
		{
			if (s[i] == accept[sec_i])
			{
				count++;
				check = 1;
				break;
			}
		}
		if (check == 0)
		{
			return (count);
		}
		check = 0;
	}
	return (count);
}
