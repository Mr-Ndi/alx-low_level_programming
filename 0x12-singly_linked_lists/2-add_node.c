#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node - function to add a new node
 * @head: the link to the first node
 * @str: the data for the node to be added
 *
 * Return: the pointer to the next node
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new;

unsigned int len = 0;

while (str[len])
	len++;

new = malloc(sizeof(list_t));

if (!new)
	return (NULL);

new->str = strdup(str);
new->len = len;
new->next = (*head);
(*head) = new;

return (*head);
}
