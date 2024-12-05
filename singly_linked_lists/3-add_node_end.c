
#include <stdio.h>
#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: Pointer to pointer of the head of the list
 * @str: String to be added as the str element of the new node
 *
 * Return: Address of the new element, or NULL if it failed
 *
 * Description: This function creates a new node with the given string,
 * and adds it to the end of the linked list. If the list is empty,
 * the new node becomes the head of the list.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node_new;
	list_t *node_end;
	int i = 0;

	if (str == NULL)
		return (NULL);
	node_new = malloc(sizeof(list_t));
		if (node_new == NULL)
			return (NULL);
	node_new->str = strdup(str);
	node_new->next = NULL;

	if (*head == NULL)
	{
		*head = node_new;
		return (node_new);
	}
	node_end = *head;
	while (node_end->next != NULL)
	{
		node_end = node_end->next;
		i++;
	}
	node_new->len = i;
	node_end->next = node_new;
	return (node_new);
}
