#include "main.h"

/**
 * print_dlistint - Prints all of the items in the dlistint_t list.
 * @h: The head node of dlistint_t.
 *
 * Return: The total list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t dnodes = 0;

	while (h)
	{
		dnodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (dnodes);
}
