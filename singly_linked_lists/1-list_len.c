#include <stdio.h>
#include "lists.h"
/**
*list_len - return the number of elements in a single linked list
*@h: linked list
*Return: return the number of list in a linked list
*/

size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		h = h->next;
		len++;
	}
return (len);
}
