#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the list_t list
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;  /* To count the number of nodes */

    /* If the list is empty, return 0 */
	if (h == NULL)
	{
		return (0);
	}

    /* Traverse through the list and print the data */
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}

		h = h->next;  /* Move to the next node */
		count++;  /* Increment the node count */
	}

	return (count);  /* Return the total number of nodes */
}
