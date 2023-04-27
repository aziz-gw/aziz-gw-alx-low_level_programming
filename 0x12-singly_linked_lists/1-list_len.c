#include "lists.h"
#include <stdio.h>

/**
 * list_len - prints the number of elements in
 * a linked list_t list
 * @h: pointer to a linked list
 *
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t cnt = 0;

	while (h != NULL)
	{
		cnt++;
		h = h->next;
	}

	return (cnt);
}
