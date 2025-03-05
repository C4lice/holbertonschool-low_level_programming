#include "main.h"
/**
 * _strncpy - ...
 * @dest: destination du pointer
 * @src: source du pointer
 * @n: numb
 * Return: ...
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, flag;

	i = 0;
	flag = 0;
	while (i < n)
	{
		if (flag)
			*(dest + i) = '\0';
		else
			*(dest + i) = *(src + i);

		if (*(src + i) == '\0')
			flag = 1;
		i++;
	}

	return (dest);
}
