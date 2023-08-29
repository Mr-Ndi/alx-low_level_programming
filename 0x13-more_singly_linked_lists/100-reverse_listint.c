# include "lists.h"
# include <stdlib.h>
/**
 * reverse_listint - function to reverse the list
 * @head: the pointer to the head of the list
 *
 * Return: the pointer to the head of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);

}
