#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t list.
 * @head: A pointer to the address of
 *        the head of the list_t list.
 *
 * Return: A pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *ahead, *behind_node;

	if (head == NULL || *head == NULL)
		return (NULL);

	behind_node = NULL;

	while ((*head)->next != NULL)
	{
		ahead = (*head)->next;
		(*head)->next = behind_node;
		behind_node = *head;
		*head = ahead;
	}

	(*head)->next = behind_node;

	return (*head);
}
