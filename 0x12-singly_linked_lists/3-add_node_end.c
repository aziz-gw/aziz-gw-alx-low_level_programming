#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a list
 * @head: head pointer
 * @str: string
 *
 * Return: address of a new element
 */

list_t *add_node_end(list_t **head, const char *str)
{

	list_t *newNode = malloc(sizeof(list_t));
	char *dupStr;

	if (newNode == NULL)
		return (NULL);

	if (str == NULL)
		return (NULL);

	dupStr = strdup(str);
	if (dupStr == NULL)
	{
		free(newNode);
		return (NULL);
	}

	newNode->str = dupStr;
	newNode->len = strlen(str);
	newNode->next = NULL;

	if (*head == NULL)
		*head = newNode;
	else
	{
		list_t *curr = *head;

		while (curr->next != NULL)
			curr = curr->next;

		curr->next = newNode;
	}

	return (newNode);
}
