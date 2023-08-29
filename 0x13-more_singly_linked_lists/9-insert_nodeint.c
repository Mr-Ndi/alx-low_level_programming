# include <stdio.h>
# include <stdlib.h>
# include "lists.h"

/**
 * insert_nodeint_at_index - function to add node at specified index
 * @head: a point to point to the first element ef a list
 * @idx: an index where we want to insert element
 * @n: the data value of a new node
 *
 * Return: pointer to the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int index;
	listint_t *new, *current = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	for (index = 0; index < idx && current != NULL; index++)
		if (index == idx - 1)
		{
			new->next = current->next;
			current->next = new;

			return (new);
		}
		else
			current = current->next;
	return (NULL);
}
