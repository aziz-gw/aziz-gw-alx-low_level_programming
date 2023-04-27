#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * add_node - adds a new node at the beginning
 * of a list_t list
 * @head: head pointer
 * @str: string
 *
 * Return: address of the new element
 */

list_t *add_node(list_t **head, const char *str)
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
	newNode->next = *head;

	*head = newNode;

	return (newNode);
}

