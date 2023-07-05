#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * and returns the head node’s data (n)
 * @head: pointer
 *
 * Return: head node’s data (n), 0 if linked list is empty
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *tmp;

	if (*head == NULL)
		return (0);

	n = (*head)->n;

	tmp = *head;
	*head = (*head)->next;

	free(tmp);

	return (n);
}

