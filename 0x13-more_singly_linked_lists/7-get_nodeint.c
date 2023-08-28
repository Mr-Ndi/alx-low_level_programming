#include <stddef.h>
#include "lists.h"

/**
 * get_nodeint_at_index - function to returns the nth node of a listint_t
 * @index: the index of the node, starting at 0
 * @head: pointer to the first node in list
 *
 * Return:pointer to the node or NULL if node doesn't exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int k;
	listint_t *poli;
	
	poli = head;
	for (k = 0; poli != NULL && k < index; k++)
	{
		poli = poli->next;
	}
	return (poli);
}
