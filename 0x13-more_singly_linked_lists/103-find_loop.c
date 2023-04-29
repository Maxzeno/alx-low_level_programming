#include "lists.h"

/**
 * find_listint_loop - Finds the loop contained in
 *                     a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: If there is no loop - NULL.
 *         Otherwise - the address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tortoise, *hare_node;

	if (head == NULL || head->next == NULL)
		return (NULL);

	tortoise = head->next;
	hare_node = (head->next)->next;

	while (hare_node)
	{
		if (tortoise == hare_node)
		{
			tortoise = head;

			while (tortoise != hare_node)
			{
				tortoise = tortoise->next;
				hare_node = hare_node->next;
			}

			return (tortoise);
		}

		tortoise = tortoise->next;
		hare_node = (hare_node->next)->next;
	}

	return (NULL);
}
