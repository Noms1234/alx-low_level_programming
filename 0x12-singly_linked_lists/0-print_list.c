#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - function that prints all the elements of list
 * @h: list pointer
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	int index = 0;

	while (h)
	{
		if (index->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", index->len, index->str);
		}
		undex++;
		index = index->next;
	}
	return (index);
}
