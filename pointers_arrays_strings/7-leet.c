#include "main.h"
#include <stdio.h>
/**
 **leet - ...i
 *@s: pointer type char
 *Return: ...
 */
char *leet(char *s)
{
	int i, j;
	char symbole[10] = { 97, 65, 101, 69, 111, 79, 116, 84, 108, 76};
	char digit[10] = { 52, 52, 51, 51, 48, 48, 55, 55, 49, 49};

	for (i = 0; *(s + i)  != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == symbole[j])
			{
				s[i] = digit[j];
			}
		}
	}
	return (s);
}
