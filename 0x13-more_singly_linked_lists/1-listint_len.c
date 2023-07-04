#include "lists.h"

/**
 * listint_len - returns the number of elements in
 * a linked listint_t list
 * @h: head pointer
 *
 * Return: number of elements in a linked listint_t list
 */

size_t listint_len(const listint_t *h)
{
	size_t cnt = 0;

	while (h != NULL)
	{
		h = h->next;
		cnt++;
	}

	return (cnt);
}
