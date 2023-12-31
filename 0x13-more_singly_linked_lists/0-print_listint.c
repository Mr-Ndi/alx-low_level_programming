# include <stdio.h>
# include "lists.h"

/**
 * print_listint - function to return numbeer of node
 * @h:pointer to the first element of a list
 *
 * Return: number of elements
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num += 1;
		h = h->next;
	}
	return (num);
}
