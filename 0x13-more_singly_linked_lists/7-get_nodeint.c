#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of
 * a listint_t linked list
 * @head: head pointer
 * @index: index of the node starting at 0
 *
 * Return: nth node of a listint_t linked list,
 * NULL if the node doesn't exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int cnt = 0;

	if (head == NULL)
		return (NULL);

	while (cnt <= index)
	{
		if (cnt == index)
			return (head);
		head = head->next;
		cnt++;
	}

	return (NULL);
}

