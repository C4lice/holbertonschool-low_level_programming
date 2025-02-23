#include "main.h"
/**
 * print_to_98 - ...
 *
 * Return: ...
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			if (n == 98)
			{
				write("%d", n);
				write("\n");
				break;
			}
			else
			{
				write("%d, ", n);
			}
		}
	}
	else
	{
		for (; n >= 98; n--)
		{
			if (n == 98)
			{
				write("%d", n);
				write("\n");
				break;
			}
			else
			{
				write("%d, ", n);
			}
		}
	}
}
