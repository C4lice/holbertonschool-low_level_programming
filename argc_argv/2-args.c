#include <stdio.h>

/**
 *main - ...
 * @argc: type de compteur d'arguments int
 * @argv: strings qui contiens des arguments
 *Return: ...
 */
int main(__attribute__((unused))int argc, char **argv)
{
	int i = 0;

	while (argv[i])
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}