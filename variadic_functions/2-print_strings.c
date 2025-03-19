#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 *print_strings - imprimer la chaîne de caractères avec le séparateur
 *@separator: pour choisir le séparateur entre les nombres
 *@n: nombre d'arguments à imprimer
 *Return: imprimer une chaîne de caractères avec un séparateur
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list string;
	char *copy;

	if (separator == NULL)
		separator = "";
	va_start(string, n);
	for (i = 0; i < n; i++)
	{
		copy = va_arg(string, char *);

		if (copy == NULL)
			copy = "(nil)";
		if (i == n - 1)
			printf("%s", copy);
		else
			printf("%s%s", copy, separator);
	}
	printf("\n");
	va_end(string);
}
