# include <stdio.h>
# include <stdlib.h>
# include "lists.h"

/**
 * add_nodeint_end - function to add node at the end of the list
 * @head:pointer to the first node
 * @n:element of new node
 *
 * Return:pointer to the new added element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *current;

	new_node = malloc(sizeof(listint_t));
	current = *head;
	new_node->n = n;
	new_node->next = NULL;

	if (!new_node)
		return (NULL);
	if (!*head)
	{
		*head = new_node;
	}
	else
	{
		while (current->next)
		{
			current = current->next;
		}
		current->next = new_node;
	}
	return (new_node);
}
