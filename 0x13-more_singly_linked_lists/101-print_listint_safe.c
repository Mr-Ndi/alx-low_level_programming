#include <stdlib.h>
#include "lists.h"
#include <stdio.h>
size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);
/**
 * looped_listint_len - function to print the linked list
 * @head: the pointer to the head
 * Return: the number of node printed
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *slow, *fast;
	size_t num  = 1;

	if (head == NULL || head->next == NULL)
		return (0);
	slow = head->next;
	fast = (head->next)->next;

	while (fast)
	{
		if (slow == fast)
		{
			slow = head;
			while (slow != fast)
			{
				num++;
				slow = slow->next;
				fast = fast->next;
			}
			slow = slow->next;

			while (slow != fast)
			{
				num++;
				slow = slow->next;

			}
			return (num);
		}
		slow = slow->next;
		fast = (fast->next)->next;
	}
	return (0);
}
/**
 * print_listint_safe - function to print the list in safe mode
 * @head: the pointer to the head of the list
 * Return: the node printed
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t node, index = 0;

	node = looped_listint_len(head);

	if (node == 0)
	{

		for (; head != NULL; node++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;

		}
	}
	else
	{
		for (index = 0; index < node; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("->[%p] %d\n", (void *)head, head->n);

	}
	return (node);

}
