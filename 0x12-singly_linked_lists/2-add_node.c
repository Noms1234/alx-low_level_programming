#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of a list_t list
 * @head: pointer to a pointer for list
 * @str: pointer to string
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	unsigned int i = 0;
	list_t *new_node;

	while (str[i])

		i++;

	new_node = malloc(sizeof(list_t));

	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	new_node->next = (*head);
	(*head) = new_node;
	return (*head);
}
