#include "lists.h"
#include <stdio.h>
/**
 * print_list - function to print all element of linked list
 * @h: the head of the linked lisst
 *
 * Return: the number of node visited
 */
size_t print_list(const list_t *h)
{
size_t a = 0;

while (h)
{
if (!h->str)
printf("[0] (nil)\n");
else
printf("[%u] %s\n", h->len, h->str);
h = h->next;
a++;

}
return (a);
}
