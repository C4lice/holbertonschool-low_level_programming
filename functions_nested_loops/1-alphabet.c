#include "main.h"
/**
 * print_alphabet - alphabets
 *
 * Return: ...
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
