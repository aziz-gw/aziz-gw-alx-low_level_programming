#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a listint_t list
 * @head: head pointer
 *
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *node_start = *head;
	listint_t *next;

	while (node_start != NULL)
	{
		next = node_start->next;
		free(node_start);

		node_start = next;
	}

	*head = NULL;
}
