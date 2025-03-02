#include "main.h"
/**
 * string_toupper - ...
 * @s: string to make CAPS
 * Return: ...
 */
char *string_toupper(char *s)
{
	char *temp;

	temp = s;
	do {
		if (*s <= 'z' && *s >= 'a')
			*s -= 32;
	} while (*s++);

	return (temp);
}
