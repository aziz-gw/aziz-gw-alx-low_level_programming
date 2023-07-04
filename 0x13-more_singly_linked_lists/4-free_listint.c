#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees a listint_t list
 * @head: head pointer
 *
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *node_start;

	while (head != NULL)
	{
		node_start = head;
		head = head->next;

		free(node_start);
	}
}
