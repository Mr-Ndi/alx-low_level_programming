# include <stdio.h>
# include "lists.h"

/**
 * listint_len - find number of element in a list
 * @h:pointer to the first note
 *
 * Return: number of element
 */
size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		n += 1;
		h = h->next;
	}
	return (n);
}
