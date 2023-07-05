#include "lists.h"

/**
 * reverse_listint -  reverses a listint_t linked list
 * @head: points to the head pointer
 *
 * Return: pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_node = NULL;
	listint_t *crnt_node = *head;
	listint_t *nxt;

	while (crnt_node != NULL)
	{
		nxt = crnt_node->next;
		crnt_node->next = prev_node;
		prev_node = crnt_node;
		crnt_node = nxt;
	}

	*head = prev_node;
	return (*head);
}
