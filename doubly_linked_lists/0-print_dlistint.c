#include <stdio.h>
#include "lists.h"
/**
 * print_dlistint - Prints all elements of a list_t list
 * @h: Pointer to the head of the list
 *
 * Description: This function traverses a linked list of type list_t,
 * printing each element's length and string content.
 *
 * Return: The number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
