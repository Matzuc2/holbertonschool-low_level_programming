#include <stdio.h>
#include "lists.h"
/**
 * print_list - Prints all elements of a list_t list
 * @h: Pointer to the head of the list
 *
 * Description: This function traverses a linked list of type list_t,
 * printing each element's length and string content. If an element's
 * string is NULL, it prints "(nil)" instead. The function also counts
 * the number of nodes in the list.
 *
 * Return: The number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;
		count++;
	}

	return (count);
}
