#include "main.h"
/**
 * _strncat - ...
 * @dest: destination du pointer
 * @src: source du pointer
 * @n: number de bytes
 * Return: ...
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; *(dest + i); i++)
		;
	j = 0;
	while (*(src + j) && j < n)
	{
		*(dest + i + j) = *(src + j);
		j++;
	}
	return (dest);
}
