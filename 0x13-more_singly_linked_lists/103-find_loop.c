#include "lists.h"
/**
 * find_listint_loop - function to find list loops
 * @head: the pointer to the head of the list
 *
 * Return: the pointer to the head node
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head;
	listint_t *faster = head;

	if (!head)
		return (NULL);
	while (slow && faster && faster->next)
	{
		faster = faster->next->next;
		slow = slow->next;
		if (faster == slow)
		{
			slow = head;
			while (slow != faster)
			{

			slow = slow->next;
			faster = faster->next;
			}
			return (faster);

		}

	}
	return (NULL);
}
