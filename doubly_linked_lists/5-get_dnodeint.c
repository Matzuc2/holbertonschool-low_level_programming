#include <stdio.h>
#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * get_dnodeint_at_index - Retrieves the node at a specific index
 *                         in a doubly linked list
 * @head: Pointer to the head of the list
 * @index: The index of the node to retrieve (starting from 0)
 *
 * Return: Pointer to the node at the given index, or NULL if the index
 *         is out of range or the list is empty
 *
 * Description:
 * This function traverses a doubly linked list to locate the node at the
 * specified index. If the index is valid, a pointer to the node is returned.
 * If the index is out of bounds or the list is empty, the function
 * returns NULL.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	if (index == 0)
		return(head);

	if (head == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < index; i++)
	{
		head = head->next;
	}
	if (head == NULL)
		return (NULL);

	return (head);
}
