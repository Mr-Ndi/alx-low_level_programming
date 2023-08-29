#include "lists.h"
#include <stdlib.h>
/**
 * free_listint_safe - function to free the list in safe version
 * @h: the pointer to the haead of the list
 *
 * Return: the number of nodes freed
 *
 */
size_t free_listint_safe(listint_t **h)
{
	size_t length = 0;
	int difference;
	listint_t *tempo;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		difference = *h - (*h)->next;
		if (difference > 0)
		{
			tempo = (*h)->next;
			free(*h);
			*h = tempo;
			length++;

		}
		else
		{
			free(*h);
			*h = NULL;
			length++;
			break;

		}
	}
	*h = NULL;

	return (length);
}
