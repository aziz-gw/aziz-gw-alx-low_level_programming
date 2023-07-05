#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at index index
 * of a listint_t linked list
 * @head: pointer to a head pointer
 * @index: index of the node that should be deleted. Starts at 0
 *
 * Return: 1 on success, -1 on failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *crnt_node = *head;
	listint_t *prev_node = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = crnt_node->next;
		free(crnt_node);

		return (-1);
	}

	while (crnt_node != NULL && i < index)
	{
		prev_node = crnt_node;
		crnt_node = crnt_node->next;
		i++;
	}

	if (crnt_node == NULL)
		return (-1);

	prev_node->next = crnt_node->next;
	free(crnt_node);

	return (1);
}
