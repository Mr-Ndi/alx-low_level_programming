#include <stddef.h>
#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_listint2 - function to free whole listt;
 * @head: pointer to the head
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *tempo;

	if (head == NULL)
		return;
	while (*head)
	{
		tempo = (*head)->next;
		free(*head);
		*head = tempo;

	}
	*head = NULL;
}
