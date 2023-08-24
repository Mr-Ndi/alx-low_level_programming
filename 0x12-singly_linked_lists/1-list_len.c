#include "lists.h"
#include <stdlib.h>
/**
 * list_len - function to return the number of elemnt of linked list
 * @h: the pointer to the node
 *
 * Return: the number of element in list
 */
size_t list_len(const list_t *h)
{
size_t a = 0;

while (h)
{
a++;
h = h->next;

}
return (a);
}
