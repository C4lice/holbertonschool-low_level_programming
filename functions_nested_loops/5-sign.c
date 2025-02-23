#include "main.h"
/**
 * print_sign - ...
 *
 * Return: ...
 */
int print_sign(int n)
{
	if (n > 0)
	{
	_putchar('+');
	return 1;
	}
	else if (n == 0)
	{
	_putchar('0');
	return 0;
	}
	else
	{
	_putchar('-');
	return -1;
	}

int main(void)
{
	int result;

	result = print_sign(5);
	write(1, "\n", 1);
	result = print_sign(0);
	write(1, "\n", 1);
	result = print_sign(-3);
	write(1, "\n", 1);

	return (0);
}
