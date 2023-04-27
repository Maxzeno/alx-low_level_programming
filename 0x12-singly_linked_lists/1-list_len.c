#include "lists.h"

/**
 * list_len - Finds the number of elements in
 *            a linked list_t list.
 * @h: The linked list_t list.
 * @elements: a counter var for size_t (nodes)
 *
 * Return: The number of elements in h.
 */
size_t list_len(const list_t *h)
{
	size_t elements;

	elements = 0;

	while (h)
	{
		elements = elements + 1;
		h = h->next;
	}

	return (elements);
}
