#include "lists.h"
#include "stdlib.h"

/**
 * insert_node - insert  number to sorted list
 * @head: list pointer
 * @number: number
 * Return: inserted node
 */

listint_t *insert_node(listint_t **head, int number)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *node = *head;

	if (!new)
		return (NULL);

	new->n = number;
	new->next = NULL;

	if (!node || new->n < node->n)
	{
		new->next = node;
		return (*head = new);
	}

	while (node)
	{
		if (!node->next || new->n < node->next->n)
		{
			new->next = node->next;
			node->next = new;
			return (node);
		}
		node = node->next;
	}
	return (NULL);
}

		new->n = number;
		new->next = *head;
		if (new->next == NULL || new->n <= (*head)->n)
			*head = new;
		while (new->next && new->n > new->next->n)
		{
			prev = new->next;
			new->next = prev->next;
		}
		if (prev)
			prev->next = new;
	}

	return (new);
}
