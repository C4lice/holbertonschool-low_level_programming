#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 *main - ...
 *@argc: type de compteur d'arguments int
 *@argv: strings qui contiens des arguments
 *Return: ...
 */
int main(__attribute__((unused))int argc, char **argv)
{
	int i = 1, j;
	int result = 0;
	char *str;

	while (argv[i])
	{
		str = argv[i];
		j = 0;
		while (str[j])
		{
			if (!isdigit(str[j]))
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		result += atoi(str);
		i++;
	}
	printf("%d\n", result);

	return (0);
}