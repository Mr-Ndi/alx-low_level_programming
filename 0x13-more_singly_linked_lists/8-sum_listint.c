# include <stdio.h>
# include "lists.h"
/**
 * sum_listint - function to show the sum of data in linked list
 * @head:pointer to the first node
 *
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int s = 0;
	listint_t *current =  head;

	while (current)
	{
		s += current->n;
		current = current->next;
	}
	return (s);
}
