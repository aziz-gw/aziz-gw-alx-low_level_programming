#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a new node at a
 * given position
 * @head: pointer to the head pointer
 * @idx: index where new node should be added
 * @n: new node data
 *
 * Return: address of new node, NULL if it fails
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *crnt_node;
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	if (*head == NULL)
		return (NULL);

	new_node->n = n;

	if (*head == NULL || idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		crnt_node = *head;
		i = 0;

		while (crnt_node != NULL && i < idx - 1)
		{
			crnt_node = crnt_node->next;
			i++;
		}

		new_node->next = crnt_node->next;
		crnt_node->next = new_node;
	}

	return (new_node);

}
