#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * pop_listint - function to delete head from the list
 * @head: the pointer to the head
 *
 * Return: 1 if head to be deleted is found , 0 for empty lis
 *
 */
int pop_listint(listint_t **head)
{
	listint_t *tempo;
	int number;

	if (!head || !*head)
	{
		return (0);
	}

	number = (*head)->n;
	tempo = (*head)->next;
	free(*head);
	*head = tempo;

	return (number);

}
