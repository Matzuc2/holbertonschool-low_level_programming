#include <stdio.h>
#include "lists.h"
/**
*dlistint_len - return the number of elements in a double linked list
*@h: linked list
*Return: return the number of list in a double linked list
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		h = h->next;
		len++;
	}
return (len);
}
