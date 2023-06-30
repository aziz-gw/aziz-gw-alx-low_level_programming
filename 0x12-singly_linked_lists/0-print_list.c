#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list
 * @h: elements of a list
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t cnt = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)");
		else
			printf("[%u] %s\n", h->len, h->str);
		cnt++;
		h = h->next;
	}

	return (cnt);
}


