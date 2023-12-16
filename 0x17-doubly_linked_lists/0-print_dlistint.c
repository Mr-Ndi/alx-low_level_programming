#include "lists.h"
#include <stdio.h>
/**
  *print_dlistint - A function to prints all the elements of list
  *@h: pointer to the head
  *
  *Return: return the count of nodes in the list
  */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *ptr = h;
	size_t n = 0;

	while (ptr)
	{
		printf("%d\n", ptr->n);
		n++;
		ptr = ptr->next;
	}
	return (n);
}
