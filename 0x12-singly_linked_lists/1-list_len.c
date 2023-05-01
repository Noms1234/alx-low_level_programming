#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - function that returns the number
 * of elements in a linked list_t list
 * @h: pointer to list
 * Return: the number of nodes
 */
size_t list_len(const list_t *h)
{
	int index = 0;

	while (h)
	{
		index++;
		h = h->next;
	}
	return (index);
}
