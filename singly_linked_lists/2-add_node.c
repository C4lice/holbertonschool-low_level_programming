#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 *add_node - to add node in the head of list
 *@head: pointer of first node
 *@str: string to inser in list
 *Return: ...
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *element;
	unsigned int size = 0, i = 0;

	element = malloc(sizeof(list_t));
	if (element == NULL)
		return (NULL);

	element->str = strdup(str);

	while (str[i])
	{
		size++;
		i++;
	}
	element->len = size;
	element->next = *head;
	size = 0;
	*head = element;
	return (element);
}
