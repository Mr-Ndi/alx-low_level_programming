# include <stdio.h>
# include <stdlib.h>
# include "lists.h"

/**
 * add_nodeint - function to add element to a list
 * @head: pointer to the first node
 * @n: data for new  node
 *
 * Return: pointer to the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *po;

	po = malloc(sizeof(listint_t));

	if (!po)
		return (NULL);
	po->n = n;
	po->next = *head;
	*head = po;
	return (po);
}
