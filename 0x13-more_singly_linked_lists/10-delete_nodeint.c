# include <stddef.h>
# include "lists.h"
# include <stdlib.h>
/**
 * delete_nodeint_at_index - fn to delete the node from a specified index
 * @head: the pointer to the haed of a list
 * @index: the specified index for node to delete
 *
 * Return: index number deleted
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head;
	listint_t *old = NULL;
	unsigned int qwe = 0;

	if (!head || !*head)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}
	while (qwe < index - 1)
	{
		if (!current || !current->next)
			return (-1);
		current = current->next;
		qwe++;
	}
	old = current->next;
	current->next = old->next;
	free(old);
	return (1);
}
