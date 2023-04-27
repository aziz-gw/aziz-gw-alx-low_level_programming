#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list_t list
 * @head: head pointer
 *
 * Return: void
 */

void free_list(list_t *head)
{
	while (head != NULL)
	{
		list_t *tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
}
