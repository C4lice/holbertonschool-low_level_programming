#include "function_pointers.h"
/**
 * print_name - fonction impression name
 * @f: fonction d'impression
 * @name: nom de l'impression
 * Return: ...
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
