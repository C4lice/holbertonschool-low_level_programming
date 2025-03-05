#include "main.h"
/**
 * _strcat - la fonction
 * @dest: ...
 * @src: ...
 * Return: ...
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	j = 0;

	for (i = 0; dest[i] != '\0'; i++)

		;

	do {
		*(dest + i + j) = *(src + j);
		j++;
	} while (*(src + j));

	return (dest);
}
