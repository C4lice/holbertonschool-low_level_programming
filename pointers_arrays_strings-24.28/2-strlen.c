#include "main.h"
/**
 * _strlen - ...
 * @s: ...
 * Return: ...
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
