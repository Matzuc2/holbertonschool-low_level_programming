#include <stdio.h>
#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_dnodeint - Adds a new node at the beginning of a doubly linked list
 * @head: Double pointer to the head of the list
 * @n: The value to store in the new node
 *
 * Return: Address of the new element, or NULL if it failed
 *
 * Description:
 * This function dynamically allocates memory for a new node in a doubly
 * linked list, initializes its value to the provided integer `n`, and
 * inserts it at the beginning of the list. The `prev` pointer of the
 * new node is set to NULL, and its `next` pointer is set to the current
 * head of the list. If the list is not empty, the `prev` pointer of the
 * old head is updated to point to the new node. The head of the list
 * is then updated to point to the new node.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	if (*head == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	if (*head != NULL)
	{
		(*head)->prev = new_node;
	}

	*head = new_node;

	return (new_node);
}
