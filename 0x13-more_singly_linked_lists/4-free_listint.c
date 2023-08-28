# include <stdio.h>
# include <stdlib.h>
# include "lists.h"

/**
 * free_listint - a function to free up list
 * @head: pointer to the first node to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *short_term;

	while (head != NULL)
	{
		short_term = head;
		head = head->next;
		free(short_term);
	}
}
