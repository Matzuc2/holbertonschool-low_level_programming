#include <stdio.h>
#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * in a doubly linked list.
 * @h: Double pointer to the head of the list.
 * @idx: Index where the new node should be inserted (starting from 0).
 * @n: Data to be added to the new node.
 *
 * Return: Address of the new node, or NULL if it fails or idx is invalid.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *temp;
	unsigned int i;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	temp = *h;
	for (i = 0; i < idx; i++)
	{
		temp = temp->next;
	}
	new_node = temp->next;
	new_node->n = n;
	if (new_node->next == NULL)
		return (add_dnodeint_end(h, n));

	if (new_node->prev == NULL)
		return (add_dnodeint(h, n));

	return (new_node);
}
