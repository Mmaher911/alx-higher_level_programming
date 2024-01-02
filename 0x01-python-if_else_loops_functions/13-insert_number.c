#include "lists.h"

/**
 * insert_node - insert  number to sorted list
 * @head: list pointer
 * @number: number
 * Return: address of node added else NULL
 */

listint_t *insert_node(listint_t **head, int number)
{
	listint_t *new = NULL;
	listint_t *prev = NULL;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	if (new)
	{
		new->n = number;
		new->next = *head;
		if (new->next == NULL || new->n <= (*head)->n)
			*head = new;
		while(new->next && new->n > new->next->n)
		{
			prev = new->next;
			new->next = prev->next;
		}
		if (prev)
			prev->next = new;
	}

	return (new);
}
