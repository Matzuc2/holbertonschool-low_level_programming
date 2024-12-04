#include <stdio.h>
#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_dnodeint_end - Adds a new node at the end of a doubly linked list
 * @head: Double pointer to the head of the list
 * @n: The value to store in the new node
 *
 * Return: Address of the new element, or NULL if it failed
 *
 * Description:
 * This function dynamically allocates memory for a new node in a doubly
 * linked list, initializes its value to the provided integer `n`, and
 * inserts it at the end of the list. If the list is empty, the new node
 * becomes the head. Otherwise, the function traverses the list to find
 * the last node, updates its `next` pointer to the new node, and sets the
 * `prev` pointer of the new node to the last node. The `next` pointer of
 * the new node is set to NULL.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node_new;
	dlistint_t *node_end;

	node_new = malloc(sizeof(dlistint_t));
		if (node_new == NULL)
			return (NULL);
	node_new->n = n;
	if (*head == NULL)
	{
		*head = node_new;
		return (node_new);
	}
	node_end = *head;
	while (node_end->next != NULL)
	{
		node_end = node_end->next;
	}
	node_end->next = node_new;
	node_new->prev = node_end;
	node_new->next = NULL;
	return (node_new);
}
