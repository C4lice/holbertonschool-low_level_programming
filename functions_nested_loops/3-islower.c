#include "main.h"
/**
 * _islower - ...
 * @c: ...
 *
 * Return: ...
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
