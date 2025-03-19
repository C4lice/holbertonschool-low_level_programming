#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 *print_numbers - imprimer les nombres avec le séparateur
 *@separator: choisi le séparateur entre les nombres
 *@n: nombre d'arguments à imprimer
 *Return: imprimer le nombre avec le séparateur
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list numbers;

	if (separator == NULL)
		separator = "";
	va_start(numbers, n);
	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
			printf("%d", va_arg(numbers, int));
		else
			printf("%d%s", va_arg(numbers, int), separator);
	}
	printf("\n");
	va_end(numbers);
}
