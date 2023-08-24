#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * free_list - function to free the linked list
 * @head: the pointer to the first node
 *
 * Return: nothing
 */
void free_list(list_t *head)
{
list_t *tempo;

while (head)
{
tempo = head->next;
free(head->str);
free(head);
head = tempo;
}
}
